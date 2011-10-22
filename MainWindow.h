#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_MainWindow.h"

#include <sstream>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:

	enum SpawnTypes {
		SPAWN_TYPE_CREATURE,
		SPAWN_TYPE_GROUP,
		SPAWN_TYPE_PLACEABLE,
		SPAWN_TYPE_ITEM
	};

	enum PlaceableBehaviors {
		PLACEABLE_BEHAVIOR_DEFAULT,
		PLACEABLE_BEHAVIOR_EMPTY_DESPAWN,
		PLACEABLE_BEHAVIOR_EMPTY_REFILL,
		PLACEABLE_BEHAVIOR_REFRESH
	};

	enum InitialStates {
		INITIAL_STATE_DISABLED,
		INITIAL_STATE_ENABLED,
		INITIAL_STATE_NONE
	};

	enum DeactivateConditions {
		DEACTIVATE_COND_CHILDREN_DEAD,
		DEACTIVATE_COND_SPAWN_REACHED,
		DEACTIVATE_COND_CHILDREN_ALIVE,
		DEACTIVATE_COND_SET_CHILDREN_DIE,
		DEACTIVATE_COND_SET_MINUTES,
		DEACTIVATE_COND_SET_CYCLES,
		DEACTIVATE_COND_COUNT_EQUALS_SPAWNS,
		DEACTIVATE_COND_NEVER
	};

	enum SpawnEffects {
		SPAWN_EFFECT_NONE,
		SPAWN_EFFECT_AREA,
		SPAWN_EFFECT_VISUAL,
		SPAWN_EFFECT_OBJECT
	};

	enum DayNightCheck {
		TIME_CHECK_NONE,
		TIME_CHECK_NONE_DAY,
		TIME_CHECK_NONE_DAY_DESPAWN,
		TIME_CHECK_NONE_NIGHT,
		TIME_CHECK_NONE_NIGHT_DESPAWN
	};

	enum AlignmentAxis {
		ALIGNMENT_AXIS_NEUTRAL,
		ALIGNMENT_AXIS_LAWFUL,
		ALIGNMENT_AXIS_CHAOS,
		ALIGNMENT_AXIS_GOOD,
		ALIGNMENT_AXIS_EVIL,
		ALIGNMENT_AXIS_ALL
	};

	enum Factions {
		FACTION_COMMONER,
		FACTION_DEFENDER,
		FACTION_MERCHANT,
		FACTION_HOSTILE
	};

	enum LootableItems {
		LOOT_ITEMS_INVENTORY,
		LOOT_ITEMS_INVENTORY_PC_KILL,
		LOOT_ITEMS_ALL,
		LOOT_ITEMS_ALL_PC_KILL,
		LOOT_ITEMS_NONE
	};

	enum CorpseRemains {
		CORPSE_REMAINS_LOOTBAG,
		CORPSE_REMAINS_BODY,
		CORPSE_REMAINS_BONES,
		CORPSE_REMAINS_POTION,
		CORPSE_REMAINS_POUCH,
		CORPSE_REMAINS_SCROLL,
		CORPSE_REMAINS_TREASURE,
		CORPSE_REMAINS_NONE
	};

	MainWindow(
		QWidget* parent = 0,
		Qt::WFlags flags = 0
		);

	~MainWindow(
		);

public slots:

	void UpdateOutput();
	void Reset();

	// Basics : Spawn Point
	void SpawnType_Changed();
	void CycleRate_Changed();
	void CycleOffset_Changed();

	// Basics : Numbers
	void TotalSpawnsMin_Changed();
	void TotalSpawnsMax_Changed();
	void SpawnsPerCycleMin_Changed();
	void SpawnsPerCycleMax_Changed();
	void SpawnChance_Changed();

	// Basics : Placeable Properties
	void PlaceBehavior_Changed();
	void RefreshInterval_Changed();
	void TrapDisableChance_Changed();

	// State : Forced State
	void InitialState_Changed();
	void InitialStateDelay_Changed();

	// State : Delay
	void RespawnDelayMin_Changed();
	void RespawnDelayMax_Changed();
	void RespawnRegulate_Changed();

	// State : Deactivation
	void DeactivateCond_Changed();
	void DeactivateSetNum_Changed();
	void DeactivateScriptCheck_Changed();
	void DeactivateScript_Changed();

	// Proximity : PC in Area
	void PCAreaCheck_Changed();
	void PCAreaDespawn_Changed();
	void PCAreaFullReset_Changed();

	// Proximity : PC Distance Requirements
	void PCDistanceCheck_Changed();
	void PCDistanceRange_Changed();
	void PCDistanceAltCheck_Changed();
	void PCDistanceAltChecks_Changed();

	// Proximity : PC Proximity Trigger
	void PCProximityCheck_Changed();
	void PCProximityDistance_Changed();
	void PCProximityDespawnCheck_Changed();
	void PCProximityDespawnRange_Changed();

	// Placement : Location & Bearing
	void LocationRangeMin_Changed();
	void LocationRangeMax_Changed();
	void LocationAtPC_Changed();
	void LocationForceRotate_Changed();

	// Placement : Alternative Spawn Locations
	void AltLocationCheck_Changed();
	void AltLocationWPLow_Changed();
	void AltLocationWPHigh_Changed();

	// Entrance/Exit : Custom Spawn Waypoints
	void CustomSpawnCheck_Changed();
	void CustomSpawnWPLow_Changed();
	void CustomSpawnWPHigh_Changed();

	// Entrance/Exit : Custom Despawn Waypoints
	void CustomDespawnCheck_Changed();
	void CustomDespawnWPLow_Changed();
	void CustomDespawnWPHigh_Changed();

	// Entrance/Exit : Spawn Effects
	void Effect_Changed();
	void EffectID_Changed();
	void EffectDuration_Changed();

	// Date & Time
	void DayNightCheck_Changed();
	void CheckDayEnable_Changed();
	void CheckDayStart_Changed();
	void CheckDayEnd_Changed();
	void CheckHourEnable_Changed();
	void CheckHourStart_Changed();
	void CheckHourEnd_Changed();

	// Specials : Alignment
	void AlignmentCheck_Changed();
	void AlignmentAxis_Changed();
	void AlignmentAdjust_Changed();

	// Specials : Faction
	void FactionCheck_Changed();
	void FactionSet_Changed();

	// Specials : Lifespan
	void LifespanCheck_Changed();
	void LifespanTimeMin_Changed();
	void LifespanTimeMax_Changed();

	// Specials : Other
	void FlagPlot_Changed();
	void Regeneration_Changed();
	void RegenerationStatusPurge_Changed();

	// Corpse : Corpse Decay
	void CorpseDecayCheck_Changed();
	void CorpseDecayDuration_Changed();
	void CorpseDecayLoot_Changed();
	void CorpseDecayRemains_Changed();

	// Corpse : Gold
	void GoldLootMin_Changed();
	void GoldLootMax_Changed();
	void GoldLootChance_Changed();

	// Corpse : Loot
	void LootCheck_Changed();
	void LootStore_Changed();
	void LootSpawn1_Changed();
	void LootSpawn2_Changed();
	void LootSpawn3_Changed();

private:

	Ui::MainWindowClass                     ui;

};

#endif