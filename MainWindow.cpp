#include "stdafx.h"
#include "MainWindow.h"

MainWindow::MainWindow(
	QWidget* parent,
	Qt::WFlags flags
	)
  : QMainWindow(
		parent,
		flags
		)
{
	ui.setupUi(this);

	// Disable initial settings.
	Reset();
}

MainWindow::~MainWindow(
	)
{

}

void
MainWindow::UpdateOutput(
	)
{
	QLineEdit* Output = ui.Output_v;
	Output->clear();

	std::stringstream OutStream;

	// Spawn point (SP[a]|O[b])
	OutStream << "SP";
	if ( ui.CycleRate_v->value() > 6 ) OutStream << ( ui.CycleRate_v->value() / 6 );
	if ( ui.CycleOffset_v->value() > 0 ) OutStream << "O" << ui.CycleOffset_v->value();

	if ( ui.SpawnType_v->currentIndex() == SPAWN_TYPE_GROUP ) OutStream << "_SG";
	else if ( ui.SpawnType_v->currentIndex() == SPAWN_TYPE_ITEM ) OutStream << "_IT";
	else if ( ui.SpawnType_v->currentIndex() == SPAWN_TYPE_PLACEABLE ) {
		OutStream << "_PL" << ui.PlaceBehavior_v->currentIndex();
		if ( ui.TrapDisableChance_v->value() != 0 ) OutStream << "T" << ui.TrapDisableChance_v->value();
		if ( ui.PlaceBehavior_v->currentIndex() == PLACEABLE_BEHAVIOR_REFRESH ) OutStream << "P" << ui.RefreshInterval_v->value();
	}

	// Spawn Number (SN[a]|O[b])
	if ( ui.TotalSpawnsMin_v->value() == ui.TotalSpawnsMax_v->value() && ui.TotalSpawnsMin_v->value() > 1 ) OutStream << "_SN" << ui.TotalSpawnsMin_v->value();
	else if ( ui.TotalSpawnsMax_v->value() != 1 ) OutStream << "_SN" << ui.TotalSpawnsMax_v->value() << "M" << ui.TotalSpawnsMin_v->value();

	// Spawn per Cycle (SA[a]|O[b])
	if ( ui.SpawnsPerCycleMin_v->value() == ui.SpawnsPerCycleMax_v->value() && ui.SpawnsPerCycleMin_v->value() > 1 ) OutStream << "_SA" << ui.SpawnsPerCycleMin_v->value();
	else if ( ui.SpawnsPerCycleMax_v->value() != 1 ) OutStream << "_SA" << ui.SpawnsPerCycleMax_v->value() << "M" << ui.SpawnsPerCycleMin_v->value();

	// Spawn Chance (RS[a])
	if ( ui.SpawnChance_v->value() < 100 ) OutStream << "_RS" << ui.SpawnChance_v->value();

	// Initial State (IS[a]|D[b])
	if ( ui.InitialState_v->currentIndex() != INITIAL_STATE_NONE ) {
		OutStream << "_IS" << ui.InitialState_v->currentIndex();
		if ( ui.InitialStateDelay_v->value() > 0 ) OutStream << "D" << ui.InitialStateDelay_v->value();
	}

	// Respawn Delay (SD[a]|M[b]|P)
	if ( ui.RespawnDelayMin_v->value() == ui.RespawnDelayMax_v->value() && ui.RespawnDelayMin_v->value() > 0 ) {
		OutStream << "_SD" << ui.RespawnDelayMin_v->value();
		if ( ui.RespawnRegulate_v->isChecked() ) OutStream << "P";
	} else if ( ui.RespawnDelayMin_v->value() != 0 ) {
		OutStream << "_SD" << ui.RespawnDelayMax_v->value() << "M" << ui.RespawnDelayMin_v->value();
		if ( ui.RespawnRegulate_v->isChecked() ) OutStream << "P";
	}

	// Deactivation (DS[a]|S[b]_DI[c])
	if ( ui.DeactivateCond_v->currentIndex() != DEACTIVATE_COND_NEVER ) {
		OutStream << "_DS" << ui.DeactivateCond_v->currentIndex();
		if ( ui.DeactivateScriptCheck_v->isChecked() ) OutStream << "S" << ui.DeactivateScript_v->value();
		if ( ui.DeactivateCond_v->currentIndex() == DEACTIVATE_COND_SET_CHILDREN_DIE ) {
			OutStream << "_DI" << ui.DeactivateSetNum_v->value();
			ui.DeactivateSetNum_v->setSuffix( " children" );
		} else if ( ui.DeactivateCond_v->currentIndex() == DEACTIVATE_COND_SET_MINUTES ) {
			OutStream << "_DI" << ui.DeactivateSetNum_v->value();
			ui.DeactivateSetNum_v->setSuffix( " minutes" );
		} else if ( ui.DeactivateCond_v->currentIndex() == DEACTIVATE_COND_SET_CYCLES ) {
			OutStream << "_DI" << ui.DeactivateSetNum_v->value();
			ui.DeactivateSetNum_v->setSuffix( " cycles" );
		} else {
			ui.DeactivateSetNum_v->setSuffix( "" );
		}
	}

	// PC in Area (PC[a]|R)
	if ( ui.PCAreaCheck_v->isChecked() ) {
		OutStream << "_PC" << ui.PCAreaDespawn_v->value();
		if ( ui.PCAreaFullReset_v->isChecked() ) OutStream << "R";
	}

	// PC Distance Requirement (SU[a]|I[b])
	if ( ui.PCDistanceCheck_v->isChecked() ) {
		OutStream << "_SU" << ui.PCDistanceRange_v->value();
		if ( ui.PCDistanceAltCheck_v->isChecked() ) OutStream << "I" << ui.PCDistanceAltChecks_v->value();
	}

	// PC Proximity Requirement (TR[a]|D[b])
	if ( ui.PCProximityCheck_v->isChecked() ) {
		OutStream << "_TR" << ui.PCProximityDistance_v->value();
		if ( ui.PCProximityDespawnCheck_v->isChecked() ) OutStream << "D" << ui.PCProximityDespawnRange_v->value();
	}

	// Spawn Position (SR[a]|M[b]|P)
	if ( ui.LocationRangeMax_v->value() > 0 ) {
		if ( ui.LocationRangeMin_v->value() == ui.LocationRangeMax_v->value() ) {
			OutStream << "_SR" << ui.LocationRangeMin_v->value();
			if ( ui.LocationAtPC_v->isChecked() ) OutStream << "P";
		} else { 
			OutStream << "_SR" << ui.LocationRangeMax_v->value() << "M" << ui.LocationRangeMin_v->value();
			if ( ui.LocationAtPC_v->isChecked() ) OutStream << "P";
		}
	}

	// Spawn Facing (SF)
	if ( ui.LocationForceRotate_v->isChecked() ) {
		OutStream << "_SF";
	}

	// Alternative Spawn Locations (SL[a]|R[b])
	if ( ui.AltLocationCheck_v->isChecked() ) {
		if ( ui.AltLocationWPLow_v->value() == ui.AltLocationWPHigh_v->value() ) {
			OutStream << "_SL" << ui.AltLocationWPLow_v->value();
		} else {
			OutStream << "_SL" << ui.AltLocationWPLow_v->value() << "R" << ui.AltLocationWPHigh_v->value();
		}
	}

	// Enter Waypoint (EE[a]|R[b])
	if ( ui.CustomSpawnCheck_v->isChecked() ) {
		if ( ui.CustomSpawnWPLow_v->value() == ui.CustomSpawnWPHigh_v->value() ) OutStream << "_EE" << ui.CustomSpawnWPLow_v->value();
		else OutStream << "_EE" << ui.CustomSpawnWPLow_v->value() << "R" << ui.CustomSpawnWPHigh_v->value();
	}

	// Exit Waypoint (EX[a]|R[b])
	if ( ui.CustomDespawnCheck_v->isChecked() ) {
		if ( ui.CustomDespawnWPLow_v->value() == ui.CustomDespawnWPHigh_v->value() ) OutStream << "_EX" << ui.CustomDespawnWPLow_v->value();
		else OutStream << "_EX" << ui.CustomDespawnWPLow_v->value() << "R" << ui.CustomDespawnWPHigh_v->value();
	}

	// Area Effect (AE[a]|D[b])
	if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_AREA ) {
		OutStream << "_AE" << ui.EffectID_v->value();
		if ( ui.EffectDuration_v->value() != 5 ) OutStream << "D" << ui.EffectDuration_v->value();
	}

	// Spawn Effect (FX[a]|D[b])
	if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_VISUAL ) {
		OutStream << "_FX" << ui.EffectID_v->value() << "D" << ui.EffectDuration_v->value();
	}

	// Object Effect (OE[a]|D[b])
	if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_OBJECT ) {
		OutStream << "_OE" << ui.EffectID_v->value();
		if ( ui.EffectDuration_v->value() != 5 ) OutStream << "D" << ui.EffectDuration_v->value();
	}

	// Spawn During Day or Night (DO|D) or (NO|D)
	if ( ui.DayNightCheck_v->currentIndex() == TIME_CHECK_NONE_DAY ) {
		OutStream << "_DO";
	} else if ( ui.DayNightCheck_v->currentIndex() == TIME_CHECK_NONE_DAY_DESPAWN ) {
		OutStream << "_DOD";
	} else if ( ui.DayNightCheck_v->currentIndex() == TIME_CHECK_NONE_NIGHT ) {
		OutStream << "_NO";
	} else if ( ui.DayNightCheck_v->currentIndex() == TIME_CHECK_NONE_NIGHT_DESPAWN ) {
		OutStream << "_NOD";
	}

	// Specific Days (DY[a]|T[b])
	if ( ui.CheckDayEnable_v->isChecked() ) {
		OutStream << "_DY";
		if ( ui.CheckDayStart_v->value() == ui.CheckDayEnd_v->value() ) {
			OutStream << ui.CheckDayStart_v->value();
		} else {
			OutStream << ui.CheckDayStart_v->value() << "T" << ui.CheckDayEnd_v->value();
		}
	}

	// Specific Hours (HR[a]|T[b])
	if ( ui.CheckHourEnable_v->isChecked() ) {
		OutStream << "_HR";
		if ( ui.CheckHourStart_v->value() == ui.CheckHourEnd_v->value() ) {
			OutStream << ui.CheckHourStart_v->value();
		} else {
			OutStream << ui.CheckHourStart_v->value() << "T" << ui.CheckHourEnd_v->value();
		}
	}

	// Spawn with Specific Alignment (AL[a]|S[b])
	if ( ui.AlignmentCheck_v->isChecked() ) {
		OutStream << "_AL" << ui.AlignmentAxis_v->currentIndex() << "S" << ui.AlignmentAdjust_v->value();
	}

	// Spawn with Specific Faction (FC[a])
	if ( ui.FactionCheck_v->isChecked() ) {
		OutStream << "_FC" << ui.FactionSet_v->currentIndex();
	}

	// Spawn with a Restricted Lifespawn (CL[a]|M[b])
	if ( ui.LifespanCheck_v->isChecked() ) {
		if ( ui.LifespanTimeMin_v->value() == ui.LifespanTimeMax_v->value() ) {
			OutStream << "_CL" << ui.LifespanTimeMin_v->value();
		} else {
			OutStream << "_CL" << ui.LifespanTimeMin_v->value() << "M" << ui.LifespanTimeMax_v->value();
		}
	}

	// Spawn as Plot Object (PT)
	if ( ui.FlagPlot_v->isChecked() ) {
		OutStream << "_PT";
	}

	// Spawn with Regeneration (HL[a]|E)
	if ( ui.Regeneration_v->value() > 0 ) {
		OutStream << "_HL";
		if ( ui.Regeneration_v->value() == 100 ) OutStream << "1";
		else OutStream << ui.Regeneration_v->value();
		if ( ui.RegenerationStatusPurge_v->isChecked() ) OutStream << "E";
	}

	// Corpse Decay (CD[a]|T[b]|R[c]|D)
	if ( ui.CorpseDecayCheck_v->isChecked() ) {
		OutStream << "_CD" << ui.CorpseDecayDuration_v->value();
		if ( ui.CorpseDecayLoot_v->currentIndex() != LOOT_ITEMS_NONE ) OutStream << "T" << ui.CorpseDecayLoot_v->currentIndex();
		if ( ui.CorpseDecayRemains_v->currentIndex() != CORPSE_REMAINS_LOOTBAG ) OutStream << "R" << ui.CorpseDecayRemains_v->currentIndex();
	}

	// Gold Drops (RG[a]|M[b]|C[c])
	if ( ui.GoldLootChance_v->value() > 0 && ui.GoldLootMax_v->value() > 0 ) {
		OutStream << "_RG" << ui.GoldLootMax_v->value();
		if ( ui.GoldLootMin_v->value() != 0 ) OutStream << "M" << ui.GoldLootMin_v->value();
		if ( ui.GoldLootChance_v->value() < 100 ) OutStream << "C" << ui.GoldLootChance_v->value();
	}

	// Loot Drops (LT[a]|A[b]|B[c]|C[d])
	if ( ui.LootCheck_v->isChecked() ) {
		OutStream << "_LT" << ui.LootStore_v->value();
		if ( ui.LootSpawn1_v->value() != 50 ) OutStream << "A" << ui.LootSpawn1_v->value();
		if ( ui.LootSpawn2_v->value() != 15 ) OutStream << "B" << ui.LootSpawn2_v->value();
		if ( ui.LootSpawn3_v->value() != 5 ) OutStream << "C" << ui.LootSpawn3_v->value();
	}

	Output->setText( OutStream.str().c_str() );
}

void
MainWindow::Reset(
	)
{
	UpdateOutput();
}


// Basics : Spawn Point
void MainWindow::SpawnType_Changed() {
	// Placeable work.
	if ( ui.SpawnType_v->currentIndex() == SPAWN_TYPE_PLACEABLE ) {
		ui.PlaceBehavior_v->setEnabled( true );
		ui.RefreshInterval_v->setEnabled( true );
		ui.TrapDisableChance_v->setEnabled( true );
	} else {
		ui.PlaceBehavior_v->setEnabled( false );
		ui.RefreshInterval_v->setEnabled( false );
		ui.TrapDisableChance_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CycleRate_Changed() {
	UpdateOutput();
}

void MainWindow::CycleOffset_Changed() {
	UpdateOutput();
}


// Basics : Numbers
void MainWindow::TotalSpawnsMin_Changed() {
	if ( ui.TotalSpawnsMin_v->value() > ui.TotalSpawnsMax_v->value() ) ui.TotalSpawnsMax_v->setValue( ui.TotalSpawnsMin_v->value() );
	UpdateOutput();
}

void MainWindow::TotalSpawnsMax_Changed() {
	if ( ui.TotalSpawnsMin_v->value() > ui.TotalSpawnsMax_v->value() ) ui.TotalSpawnsMin_v->setValue( ui.TotalSpawnsMax_v->value() );
	UpdateOutput();
}

void MainWindow::SpawnsPerCycleMin_Changed() {
	if ( ui.SpawnsPerCycleMin_v->value() > ui.SpawnsPerCycleMax_v->value() ) ui.SpawnsPerCycleMax_v->setValue( ui.SpawnsPerCycleMin_v->value() );
	UpdateOutput();
}

void MainWindow::SpawnsPerCycleMax_Changed() {
	if ( ui.SpawnsPerCycleMin_v->value() > ui.SpawnsPerCycleMax_v->value() ) ui.SpawnsPerCycleMin_v->setValue( ui.SpawnsPerCycleMax_v->value() );
	UpdateOutput();
}

void MainWindow::SpawnChance_Changed() {
	UpdateOutput();
}


// Basics : Placeable Properties
void MainWindow::PlaceBehavior_Changed() {
	if ( ui.PlaceBehavior_v->currentIndex() == PLACEABLE_BEHAVIOR_REFRESH ) {
		ui.RefreshInterval_v->setEnabled( true );
	} else {
		ui.RefreshInterval_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::RefreshInterval_Changed() {
	UpdateOutput();
}

void MainWindow::TrapDisableChance_Changed() {
	UpdateOutput();
}


// State : Forced State
void MainWindow::InitialState_Changed() {
	// Toggle elements.
	if ( ui.InitialState_v->currentIndex() == INITIAL_STATE_NONE ) {
		ui.InitialStateDelay_v->setEnabled( false );
	} else {
		ui.InitialStateDelay_v->setEnabled( true );
	}

	UpdateOutput();
}

void MainWindow::InitialStateDelay_Changed() {
	UpdateOutput();
}


// State : Delay
void MainWindow::RespawnDelayMin_Changed() {
	if ( ui.RespawnDelayMin_v->value() > ui.RespawnDelayMax_v->value() ) ui.RespawnDelayMax_v->setValue( ui.RespawnDelayMin_v->value() );
	UpdateOutput();
}

void MainWindow::RespawnDelayMax_Changed() {
	if ( ui.RespawnDelayMin_v->value() > ui.RespawnDelayMax_v->value() ) ui.RespawnDelayMin_v->setValue( ui.RespawnDelayMax_v->value() );
	UpdateOutput();
}

void MainWindow::RespawnRegulate_Changed() {
	UpdateOutput();
}


// State : Deactivation
void MainWindow::DeactivateCond_Changed() {
	// Toggle elements.
	if ( ui.DeactivateCond_v->currentIndex() == DEACTIVATE_COND_NEVER ) {
		ui.DeactivateSetNum_v->setEnabled( false );
		ui.DeactivateScriptCheck_v->setEnabled( false );
		ui.DeactivateScript_v->setEnabled( false );
	} else {
		ui.DeactivateSetNum_v->setEnabled( true );
		ui.DeactivateScriptCheck_v->setEnabled( true );
		if ( ui.DeactivateScriptCheck_v->isChecked() ) ui.DeactivateScript_v->setEnabled( true );
	}

	UpdateOutput();
}

void MainWindow::DeactivateSetNum_Changed() {
	UpdateOutput();
}

void MainWindow::DeactivateScriptCheck_Changed() {
	if ( ui.DeactivateScriptCheck_v->isChecked() ) {
		ui.DeactivateScript_v->setEnabled( true );
	} else {
		ui.DeactivateScript_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::DeactivateScript_Changed() {
	UpdateOutput();
}


// Proximity : PC in Area
void MainWindow::PCAreaCheck_Changed() {
	if ( ui.PCAreaCheck_v->isChecked() ) {
		ui.PCAreaDespawn_v->setEnabled( true );
		ui.PCAreaFullReset_v->setEnabled( true );
	} else {
		ui.PCAreaDespawn_v->setEnabled( false );
		ui.PCAreaFullReset_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::PCAreaDespawn_Changed() {
	UpdateOutput();
}

void MainWindow::PCAreaFullReset_Changed() {
	UpdateOutput();
}


// Proximity : PC Distance Requirements
void MainWindow::PCDistanceCheck_Changed() {
	if ( ui.PCDistanceCheck_v->isChecked() ) {
		ui.PCDistanceRange_v->setEnabled( true );
		ui.PCDistanceAltCheck_v->setEnabled( true );
		if ( ui.PCDistanceAltCheck_v->isChecked() ) ui.PCDistanceAltChecks_v->setEnabled( true );
	} else {
		ui.PCDistanceRange_v->setEnabled( false );
		ui.PCDistanceAltCheck_v->setEnabled( false );
		ui.PCDistanceAltChecks_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::PCDistanceRange_Changed() {
	if ( ui.PCProximityDistance_v->value() > ui.PCDistanceRange_v->value() ) ui.PCProximityDistance_v->setValue( ui.PCDistanceRange_v->value() );
	UpdateOutput();
}

void MainWindow::PCDistanceAltCheck_Changed() {
	if ( ui.PCDistanceAltCheck_v->isChecked() ) {
		ui.PCDistanceAltChecks_v->setEnabled( true );
	} else {
		ui.PCDistanceAltChecks_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::PCDistanceAltChecks_Changed() {
	UpdateOutput();
}


// Proximity : PC Proximity Trigger
void MainWindow::PCProximityCheck_Changed() {
	if ( ui.PCProximityCheck_v->isChecked() ) {
		ui.PCProximityDistance_v->setEnabled( true );
		ui.PCProximityDespawnCheck_v->setEnabled ( true );
		if ( ui.PCProximityDespawnCheck_v->isChecked() ) ui.PCProximityDespawnRange_v->setEnabled( true );
	} else {
		ui.PCProximityDistance_v->setEnabled( false );
		ui.PCProximityDespawnCheck_v->setEnabled ( false );
		ui.PCProximityDespawnRange_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::PCProximityDistance_Changed() {
	if ( ui.PCProximityDistance_v->value() > ui.PCDistanceRange_v->value() ) ui.PCDistanceRange_v->setValue( ui.PCProximityDistance_v->value() );
	UpdateOutput();
}

void MainWindow::PCProximityDespawnCheck_Changed() {
	if ( ui.PCProximityDespawnCheck_v->isChecked() ) {
		ui.PCProximityDespawnRange_v->setEnabled( true );
	} else {
		ui.PCProximityDespawnRange_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::PCProximityDespawnRange_Changed() {
	UpdateOutput();
}


// Placement : Location & Bearing
void MainWindow::LocationRangeMin_Changed() {
	if ( ui.LocationRangeMin_v->value() > ui.LocationRangeMax_v->value() ) ui.LocationRangeMax_v->setValue( ui.LocationRangeMin_v->value() );
	UpdateOutput();
}

void MainWindow::LocationRangeMax_Changed() {
	if ( ui.LocationRangeMin_v->value() > ui.LocationRangeMax_v->value() ) ui.LocationRangeMin_v->setValue( ui.LocationRangeMax_v->value() );
	UpdateOutput();
}

void MainWindow::LocationAtPC_Changed() {
	UpdateOutput();
}

void MainWindow::LocationForceRotate_Changed() {
	UpdateOutput();
}


// Placement : Alternative Spawn Locations
void MainWindow::AltLocationCheck_Changed() {
	if ( ui.AltLocationCheck_v->isChecked() ) {
		ui.AltLocationWPLow_v->setEnabled( true );
		ui.AltLocationWPHigh_v->setEnabled( true );
	} else {
		ui.AltLocationWPLow_v->setEnabled( false );
		ui.AltLocationWPHigh_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::AltLocationWPLow_Changed() {
	if ( ui.AltLocationWPLow_v->value() > ui.AltLocationWPHigh_v->value() ) ui.AltLocationWPHigh_v->setValue( ui.AltLocationWPLow_v->value() );
	UpdateOutput();
}

void MainWindow::AltLocationWPHigh_Changed() {
	if ( ui.AltLocationWPLow_v->value() > ui.AltLocationWPHigh_v->value() ) ui.AltLocationWPLow_v->setValue( ui.AltLocationWPHigh_v->value() );
	UpdateOutput();
}


// Entrance/Exit : Custom Spawn Waypoints
void MainWindow::CustomSpawnCheck_Changed() {
	if ( ui.CustomSpawnCheck_v->isChecked() ) {
		ui.CustomSpawnWPLow_v->setEnabled( true );
		ui.CustomSpawnWPHigh_v->setEnabled( true );
	} else {
		ui.CustomSpawnWPLow_v->setEnabled( false );
		ui.CustomSpawnWPHigh_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CustomSpawnWPLow_Changed() {
	if ( ui.CustomSpawnWPLow_v->value() > ui.CustomSpawnWPHigh_v->value() ) ui.CustomSpawnWPHigh_v->setValue( ui.CustomSpawnWPLow_v->value() );
	UpdateOutput();
}

void MainWindow::CustomSpawnWPHigh_Changed() {
	if ( ui.CustomSpawnWPLow_v->value() > ui.CustomSpawnWPHigh_v->value() ) ui.CustomSpawnWPLow_v->setValue( ui.CustomSpawnWPHigh_v->value() );
	UpdateOutput();
}


// Entrance/Exit : Custom Despawn Waypoints
void MainWindow::CustomDespawnCheck_Changed() {
	if ( ui.CustomDespawnCheck_v->isChecked() ) {
		ui.CustomDespawnWPLow_v->setEnabled( true );
		ui.CustomDespawnWPHigh_v->setEnabled( true );
	} else {
		ui.CustomDespawnWPLow_v->setEnabled( false );
		ui.CustomDespawnWPHigh_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CustomDespawnWPLow_Changed() {
	if ( ui.CustomDespawnWPLow_v->value() > ui.CustomDespawnWPHigh_v->value() ) ui.CustomDespawnWPHigh_v->setValue( ui.CustomDespawnWPLow_v->value() );
	UpdateOutput();
}

void MainWindow::CustomDespawnWPHigh_Changed() {
	if ( ui.CustomDespawnWPLow_v->value() > ui.CustomDespawnWPHigh_v->value() ) ui.CustomDespawnWPLow_v->setValue( ui.CustomDespawnWPHigh_v->value() );
	UpdateOutput();
}


// Entrance/Exit : Spawn Effects
void MainWindow::Effect_Changed() {
	ui.EffectID_v->setEnabled( true );
	ui.EffectDuration_v->setEnabled( true );
	if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_AREA ) {
		ui.EffectDuration_l->setText( "Duration:" );
		ui.EffectDuration_v->setSuffix( " seconds" );
		ui.EffectDuration_v->setStatusTip( "Duration of the effect. A duration of 0 is permanent." );
	} else if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_VISUAL ) {
		ui.EffectDuration_l->setText( "Despawn Effect ID:" );
		ui.EffectDuration_v->setSuffix( "" );
		ui.EffectDuration_v->setStatusTip( "Effect ID to launch on despawn." );
	} else if ( ui.Effect_v->currentIndex() == SPAWN_EFFECT_OBJECT ) {
		ui.EffectDuration_l->setText( "Duration:" );
		ui.EffectDuration_v->setSuffix( " seconds" );
		ui.EffectDuration_v->setStatusTip( "Duration of the effect. A duration of 0 is permanent." );
	} else {
		ui.EffectID_v->setEnabled( false );
		ui.EffectDuration_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::EffectID_Changed() {
	UpdateOutput();
}

void MainWindow::EffectDuration_Changed() {
	if ( ui.Effect_v->currentIndex() != SPAWN_EFFECT_VISUAL ) {
		if ( ui.EffectDuration_v->value() == 0 ) ui.EffectDuration_v->setSuffix( " (permanent)" );
		else ui.EffectDuration_v->setSuffix( " seconds" );
	}

	UpdateOutput();
}

// Date & Time
void MainWindow::DayNightCheck_Changed() {
	UpdateOutput();
}

void MainWindow::CheckDayEnable_Changed() {
	if ( ui.CheckDayEnable_v->isChecked() ) {
		ui.CheckDayStart_v->setEnabled( true );
		ui.CheckDayEnd_v->setEnabled( true );
	} else {
		ui.CheckDayStart_v->setEnabled( false );
		ui.CheckDayEnd_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CheckDayStart_Changed() {
	if ( ui.CheckDayStart_v->value() > ui.CheckDayEnd_v->value() ) ui.CheckDayEnd_v->setValue( ui.CheckDayStart_v->value() );
	UpdateOutput();
}

void MainWindow::CheckDayEnd_Changed() {
	if ( ui.CheckDayStart_v->value() > ui.CheckDayEnd_v->value() ) ui.CheckDayStart_v->setValue( ui.CheckDayEnd_v->value() );
	UpdateOutput();
}

void MainWindow::CheckHourEnable_Changed() {
	if ( ui.CheckHourEnable_v->isChecked() ) {
		ui.CheckHourStart_v->setEnabled( true );
		ui.CheckHourEnd_v->setEnabled( true );
	} else {
		ui.CheckHourStart_v->setEnabled( false );
		ui.CheckHourEnd_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CheckHourStart_Changed() {
	if ( ui.CheckHourStart_v->value() > ui.CheckHourEnd_v->value() ) ui.CheckHourEnd_v->setValue( ui.CheckHourStart_v->value() );
	UpdateOutput();
}

void MainWindow::CheckHourEnd_Changed() {
	if ( ui.CheckHourStart_v->value() > ui.CheckHourEnd_v->value() ) ui.CheckHourStart_v->setValue( ui.CheckHourEnd_v->value() );
	UpdateOutput();
}


// Specials : Alignment
void MainWindow::AlignmentCheck_Changed() {
	if ( ui.AlignmentCheck_v->isChecked() ) {
		ui.AlignmentAxis_v->setEnabled( true );
		ui.AlignmentAdjust_v->setEnabled( true );
	} else {
		ui.AlignmentAxis_v->setEnabled( false );
		ui.AlignmentAdjust_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::AlignmentAxis_Changed() {
	UpdateOutput();
}

void MainWindow::AlignmentAdjust_Changed() {
	UpdateOutput();
}


// Specials : Faction
void MainWindow::FactionCheck_Changed() {
	if ( ui.FactionCheck_v->isChecked() ) {
		ui.FactionSet_v->setEnabled( true );
	} else {
		ui.FactionSet_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::FactionSet_Changed() {
	UpdateOutput();
}


// Specials : Lifespan
void MainWindow::LifespanCheck_Changed() {
	if ( ui.LifespanCheck_v->isChecked() ) {
		ui.LifespanTimeMin_v->setEnabled( true );
		ui.LifespanTimeMax_v->setEnabled( true );
	} else {
		ui.LifespanTimeMin_v->setEnabled( false );
		ui.LifespanTimeMax_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::LifespanTimeMin_Changed() {
	if ( ui.LifespanTimeMin_v->value() > ui.LifespanTimeMax_v->value() ) ui.LifespanTimeMax_v->setValue( ui.LifespanTimeMin_v->value() );
	UpdateOutput();
}

void MainWindow::LifespanTimeMax_Changed() {
	if ( ui.LifespanTimeMin_v->value() > ui.LifespanTimeMax_v->value() ) ui.LifespanTimeMin_v->setValue( ui.LifespanTimeMax_v->value() );
	UpdateOutput();
}


// Specials : Other
void MainWindow::FlagPlot_Changed() {
	UpdateOutput();
}

void MainWindow::Regeneration_Changed() {
	if ( ui.Regeneration_v->value() > 0 ) {
		ui.RegenerationStatusPurge_v->setEnabled( true );
	} else {
		ui.RegenerationStatusPurge_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::RegenerationStatusPurge_Changed() {
	UpdateOutput();
}


// Corpse : Corpse Decay
void MainWindow::CorpseDecayCheck_Changed() {
	if ( ui.CorpseDecayCheck_v->isChecked() ) {
		ui.CorpseDecayDuration_v->setEnabled( true );
		ui.CorpseDecayLoot_v->setEnabled( true );
		ui.CorpseDecayRemains_v->setEnabled( true );
	} else {
		ui.CorpseDecayDuration_v->setEnabled( false );
		ui.CorpseDecayLoot_v->setEnabled( false );
		ui.CorpseDecayRemains_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::CorpseDecayDuration_Changed() {
	UpdateOutput();
}

void MainWindow::CorpseDecayLoot_Changed() {
	UpdateOutput();
}

void MainWindow::CorpseDecayRemains_Changed() {
	UpdateOutput();
}


// Corpse : Gold
void MainWindow::GoldLootMin_Changed() {
	if ( ui.GoldLootMin_v->value() > ui.GoldLootMax_v->value() ) ui.GoldLootMax_v->setValue( ui.GoldLootMin_v->value() );
	UpdateOutput();
}

void MainWindow::GoldLootMax_Changed() {
	if ( ui.GoldLootMin_v->value() > ui.GoldLootMax_v->value() ) ui.GoldLootMin_v->setValue( ui.GoldLootMax_v->value() );
	UpdateOutput();
}

void MainWindow::GoldLootChance_Changed() {
	if ( ui.GoldLootChance_v->value() > 0 ) {
		ui.GoldLootMin_v->setEnabled( true );
		ui.GoldLootMax_v->setEnabled( true );
	} else {
		ui.GoldLootMin_v->setEnabled( false );
		ui.GoldLootMax_v->setEnabled( false );
	}

	UpdateOutput();
}


// Corpse : Loot
void MainWindow::LootCheck_Changed() {
	if ( ui.LootCheck_v->isChecked() ) {
		ui.LootStore_v->setEnabled( true );
		ui.LootSpawn1_v->setEnabled( true );
		ui.LootSpawn2_v->setEnabled( true );
		ui.LootSpawn3_v->setEnabled( true );
	} else {
		ui.LootStore_v->setEnabled( false );
		ui.LootSpawn1_v->setEnabled( false );
		ui.LootSpawn2_v->setEnabled( false );
		ui.LootSpawn3_v->setEnabled( false );
	}

	UpdateOutput();
}

void MainWindow::LootStore_Changed() {
	UpdateOutput();
}

void MainWindow::LootSpawn1_Changed() {
	UpdateOutput();
}

void MainWindow::LootSpawn2_Changed() {
	UpdateOutput();
}

void MainWindow::LootSpawn3_Changed() {
	UpdateOutput();
}
