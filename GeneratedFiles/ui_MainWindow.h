/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Fri Apr 29 14:46:52 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *Output_v;
    QTabWidget *twMain;
    QWidget *tabBasics;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbSpawnPoint;
    QFormLayout *formLayout;
    QLabel *CycleRate_l;
    QSpinBox *CycleRate_v;
    QLabel *CycleOffset_l;
    QSpinBox *CycleOffset_v;
    QLabel *SpawnType_l;
    QComboBox *SpawnType_v;
    QGroupBox *gbNumbers;
    QFormLayout *formLayout_2;
    QLabel *TotalSpawns_l;
    QSpinBox *TotalSpawnsMin_v;
    QSpinBox *TotalSpawnsMax_v;
    QLabel *SpawnsPerCycle_l;
    QSpinBox *SpawnsPerCycleMin_v;
    QSpinBox *SpawnsPerCycleMax_v;
    QWidget *gbNumbersPad1;
    QWidget *gbNumbersPad2;
    QLabel *SpawnChance_l;
    QSlider *SpawnChance_v;
    QGroupBox *gbPlaceProp;
    QFormLayout *formLayout_19;
    QLabel *PlaceBehavior_l;
    QComboBox *PlaceBehavior_v;
    QSlider *TrapDisableChance_v;
    QLabel *RefreshInterval_l;
    QSpinBox *RefreshInterval_v;
    QLabel *TrapDisableChance_l;
    QSpacerItem *vSpaceBasics;
    QWidget *tabState;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbForcedState;
    QFormLayout *formLayout_4;
    QLabel *InitialState_l;
    QWidget *gbForcedStatePad1;
    QSpinBox *InitialStateDelay_v;
    QComboBox *InitialState_v;
    QGroupBox *gbDelay;
    QFormLayout *formLayout_5;
    QLabel *RespawnDelay_l;
    QSpinBox *RespawnDelayMin_v;
    QSpinBox *RespawnDelayMax_v;
    QCheckBox *RespawnRegulate_v;
    QWidget *gbDelayPad1;
    QWidget *gbDelayPad2;
    QGroupBox *gbDeactivation;
    QFormLayout *formLayout_20;
    QLabel *DeactivateCond_l;
    QComboBox *DeactivateCond_v;
    QLabel *DeactivateSetNum_l;
    QSpinBox *DeactivateSetNum_v;
    QLabel *DeactivateScript_l;
    QWidget *gbDeactivePad1;
    QCheckBox *DeactivateScriptCheck_v;
    QSpinBox *DeactivateScript_v;
    QSpacerItem *vSpaceState;
    QWidget *tabProximity;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *gbPCArea;
    QFormLayout *formLayout_11;
    QLabel *PCAreaDespawn_l;
    QSpinBox *PCAreaDespawn_v;
    QWidget *gbPCAreaPad1;
    QCheckBox *PCAreaCheck_v;
    QWidget *gbPCAreaPad2;
    QCheckBox *PCAreaFullReset_v;
    QGroupBox *gbPCDistance;
    QFormLayout *formLayout_12;
    QLabel *PCDistanceRange_l;
    QWidget *gbPCDistancePad1;
    QCheckBox *PCDistanceCheck_v;
    QSpinBox *PCDistanceRange_v;
    QWidget *gbPCDistancePad2;
    QCheckBox *PCDistanceAltCheck_v;
    QLabel *PCDistanceAltChecks_l;
    QSpinBox *PCDistanceAltChecks_v;
    QGroupBox *gbPCProximity;
    QFormLayout *formLayout_13;
    QLabel *PCProximityDistance_l;
    QSpinBox *PCProximityDistance_v;
    QWidget *gbPCProximityPad1;
    QWidget *gbPCProximityPad2;
    QCheckBox *PCProximityDespawnCheck_v;
    QSpinBox *PCProximityDespawnRange_v;
    QLabel *PCProximityDespawnRange_l;
    QCheckBox *PCProximityCheck_v;
    QSpacerItem *vSpaceProximity;
    QWidget *tabPlacement;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *gbLocation;
    QFormLayout *formLayout_6;
    QLabel *LocationRange_l;
    QSpinBox *LocationRangeMin_v;
    QSpinBox *LocationRangeMax_v;
    QWidget *gbLocationPad1;
    QCheckBox *LocationAtPC_v;
    QWidget *gbLocationPad2;
    QCheckBox *LocationForceRotate_v;
    QWidget *gbLocationPad3;
    QGroupBox *gbAltLocation;
    QFormLayout *formLayout_7;
    QLabel *AltLocationWP_l;
    QWidget *gbAltLocationPad1;
    QCheckBox *AltLocationCheck_v;
    QSpinBox *AltLocationWPLow_v;
    QSpinBox *AltLocationWPHigh_v;
    QWidget *gbAltLocationPad2;
    QSpacerItem *vSpacePlacement;
    QWidget *tabEnterExit;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *gbCustomSpawn;
    QFormLayout *formLayout_8;
    QWidget *gbCustomSpawnPad1;
    QCheckBox *CustomSpawnCheck_v;
    QLabel *label_18;
    QSpinBox *CustomSpawnWPLow_v;
    QSpinBox *CustomSpawnWPHigh_v;
    QWidget *gbCustomSpawnPad2;
    QGroupBox *gbCustomDespawn;
    QFormLayout *formLayout_9;
    QWidget *gbCustomDespawnPad1;
    QCheckBox *CustomDespawnCheck_v;
    QLabel *CustomDespawnWP_l;
    QSpinBox *CustomDespawnWPLow_v;
    QSpinBox *CustomDespawnWPHigh_v;
    QWidget *gbCustomDespawnPad2;
    QGroupBox *gbEffects;
    QFormLayout *formLayout_21;
    QLabel *EffectID_l;
    QSpinBox *EffectID_v;
    QLabel *EffectDuration_l;
    QSpinBox *EffectDuration_v;
    QLabel *Effect_l;
    QComboBox *Effect_v;
    QSpacerItem *vSpaceEnterExit;
    QWidget *tabDateTime;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gbDateTime;
    QFormLayout *formLayout_3;
    QLabel *DayNightCheck_l;
    QComboBox *DayNightCheck_v;
    QWidget *gbDateTimePad1;
    QCheckBox *CheckDayEnable_v;
    QLabel *CheckDayStart_l;
    QSpinBox *CheckDayStart_v;
    QLabel *CheckDayEnd_l;
    QSpinBox *CheckDayEnd_v;
    QWidget *gbDateTimePad2;
    QCheckBox *CheckHourEnable_v;
    QLabel *CheckHourStart_l;
    QSpinBox *CheckHourStart_v;
    QLabel *CheckHourEnd_l;
    QSpinBox *CheckHourEnd_v;
    QSpacerItem *vSpaceDateTime;
    QWidget *tabSpecials;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *gbAlignment;
    QFormLayout *formLayout_14;
    QWidget *gbAlignmentPad1;
    QCheckBox *AlignmentCheck_v;
    QLabel *AlignmentAxis_l;
    QLabel *AlignmentAdjust_l;
    QComboBox *AlignmentAxis_v;
    QSpinBox *AlignmentAdjust_v;
    QGroupBox *gbFaction;
    QFormLayout *formLayout_15;
    QCheckBox *FactionCheck_v;
    QLabel *FactionSet_l;
    QComboBox *FactionSet_v;
    QWidget *gbFactionPad1;
    QGroupBox *gbLifespan;
    QFormLayout *formLayout_17;
    QWidget *gbLifespanPad1;
    QCheckBox *LifespanCheck_v;
    QLabel *LifespanTimeMin_l;
    QLabel *LifespanTimeMax_l;
    QSpinBox *LifespanTimeMin_v;
    QSpinBox *LifespanTimeMax_v;
    QGroupBox *gbOther;
    QFormLayout *formLayout_16;
    QWidget *gbOtherPad1;
    QCheckBox *FlagPlot_v;
    QLabel *Regeneration_l;
    QSlider *Regeneration_v;
    QCheckBox *RegenerationStatusPurge_v;
    QWidget *widget;
    QSpacerItem *vSpaceSpecials;
    QWidget *tabCorpse;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *gbCorpseDecay;
    QFormLayout *formLayout_10;
    QLabel *CorpseDecayDuration_l;
    QWidget *gbCorpseDecayPad1;
    QCheckBox *CorpseDecayCheck_v;
    QLabel *CorpseDecayLoot_l;
    QComboBox *CorpseDecayLoot_v;
    QLabel *CorpseDecayRemains_l;
    QComboBox *CorpseDecayRemains_v;
    QSpinBox *CorpseDecayDuration_v;
    QGroupBox *gbGold;
    QFormLayout *formLayout_18;
    QLabel *GoldLoot_l;
    QSpinBox *GoldLootMin_v;
    QSpinBox *GoldLootMax_v;
    QWidget *gbGoldPad1;
    QLabel *GoldLootChance_l;
    QSlider *GoldLootChance_v;
    QGroupBox *gbLoot;
    QFormLayout *formLayout_22;
    QWidget *gbLootPad1;
    QCheckBox *LootCheck_v;
    QLabel *LootStore_l;
    QSpinBox *LootStore_v;
    QLabel *LootSpawn1_l;
    QLabel *LootSpawn2_l;
    QLabel *LootSpawn3_l;
    QSlider *LootSpawn1_v;
    QSlider *LootSpawn2_v;
    QSlider *LootSpawn3_v;
    QSpacerItem *vSpaceCorpse;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(575, 534);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWindow/Resources/NessGen.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        Output_v = new QLineEdit(centralWidget);
        Output_v->setObjectName(QString::fromUtf8("Output_v"));
        Output_v->setMinimumSize(QSize(555, 0));
        Output_v->setMaximumSize(QSize(555, 16777215));
        QFont font;
        font.setPointSize(10);
        Output_v->setFont(font);
        Output_v->setReadOnly(true);

        verticalLayout->addWidget(Output_v);

        twMain = new QTabWidget(centralWidget);
        twMain->setObjectName(QString::fromUtf8("twMain"));
        twMain->setMinimumSize(QSize(555, 0));
        twMain->setMaximumSize(QSize(555, 16777215));
        tabBasics = new QWidget();
        tabBasics->setObjectName(QString::fromUtf8("tabBasics"));
        verticalLayout_2 = new QVBoxLayout(tabBasics);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbSpawnPoint = new QGroupBox(tabBasics);
        gbSpawnPoint->setObjectName(QString::fromUtf8("gbSpawnPoint"));
        formLayout = new QFormLayout(gbSpawnPoint);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        CycleRate_l = new QLabel(gbSpawnPoint);
        CycleRate_l->setObjectName(QString::fromUtf8("CycleRate_l"));
        CycleRate_l->setMinimumSize(QSize(100, 0));
        CycleRate_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CycleRate_l->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, CycleRate_l);

        CycleRate_v = new QSpinBox(gbSpawnPoint);
        CycleRate_v->setObjectName(QString::fromUtf8("CycleRate_v"));
        CycleRate_v->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        CycleRate_v->setMinimum(6);
        CycleRate_v->setMaximum(3600);
        CycleRate_v->setSingleStep(6);
        CycleRate_v->setValue(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, CycleRate_v);

        CycleOffset_l = new QLabel(gbSpawnPoint);
        CycleOffset_l->setObjectName(QString::fromUtf8("CycleOffset_l"));
        CycleOffset_l->setMinimumSize(QSize(100, 0));
        CycleOffset_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, CycleOffset_l);

        CycleOffset_v = new QSpinBox(gbSpawnPoint);
        CycleOffset_v->setObjectName(QString::fromUtf8("CycleOffset_v"));
        CycleOffset_v->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        formLayout->setWidget(2, QFormLayout::FieldRole, CycleOffset_v);

        SpawnType_l = new QLabel(gbSpawnPoint);
        SpawnType_l->setObjectName(QString::fromUtf8("SpawnType_l"));
        SpawnType_l->setMinimumSize(QSize(100, 0));
        SpawnType_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, SpawnType_l);

        SpawnType_v = new QComboBox(gbSpawnPoint);
        SpawnType_v->setObjectName(QString::fromUtf8("SpawnType_v"));

        formLayout->setWidget(0, QFormLayout::FieldRole, SpawnType_v);


        verticalLayout_2->addWidget(gbSpawnPoint);

        gbNumbers = new QGroupBox(tabBasics);
        gbNumbers->setObjectName(QString::fromUtf8("gbNumbers"));
        formLayout_2 = new QFormLayout(gbNumbers);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        TotalSpawns_l = new QLabel(gbNumbers);
        TotalSpawns_l->setObjectName(QString::fromUtf8("TotalSpawns_l"));
        TotalSpawns_l->setMinimumSize(QSize(100, 0));
        TotalSpawns_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, TotalSpawns_l);

        TotalSpawnsMin_v = new QSpinBox(gbNumbers);
        TotalSpawnsMin_v->setObjectName(QString::fromUtf8("TotalSpawnsMin_v"));
        TotalSpawnsMin_v->setMinimum(1);
        TotalSpawnsMin_v->setMaximum(99);
        TotalSpawnsMin_v->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TotalSpawnsMin_v);

        TotalSpawnsMax_v = new QSpinBox(gbNumbers);
        TotalSpawnsMax_v->setObjectName(QString::fromUtf8("TotalSpawnsMax_v"));
        TotalSpawnsMax_v->setMinimum(1);
        TotalSpawnsMax_v->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, TotalSpawnsMax_v);

        SpawnsPerCycle_l = new QLabel(gbNumbers);
        SpawnsPerCycle_l->setObjectName(QString::fromUtf8("SpawnsPerCycle_l"));
        SpawnsPerCycle_l->setMinimumSize(QSize(100, 0));
        SpawnsPerCycle_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SpawnsPerCycle_l->setWordWrap(true);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, SpawnsPerCycle_l);

        SpawnsPerCycleMin_v = new QSpinBox(gbNumbers);
        SpawnsPerCycleMin_v->setObjectName(QString::fromUtf8("SpawnsPerCycleMin_v"));
        SpawnsPerCycleMin_v->setMinimum(1);
        SpawnsPerCycleMin_v->setValue(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, SpawnsPerCycleMin_v);

        SpawnsPerCycleMax_v = new QSpinBox(gbNumbers);
        SpawnsPerCycleMax_v->setObjectName(QString::fromUtf8("SpawnsPerCycleMax_v"));
        SpawnsPerCycleMax_v->setMinimum(1);
        SpawnsPerCycleMax_v->setValue(1);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, SpawnsPerCycleMax_v);

        gbNumbersPad1 = new QWidget(gbNumbers);
        gbNumbersPad1->setObjectName(QString::fromUtf8("gbNumbersPad1"));
        gbNumbersPad1->setMinimumSize(QSize(100, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, gbNumbersPad1);

        gbNumbersPad2 = new QWidget(gbNumbers);
        gbNumbersPad2->setObjectName(QString::fromUtf8("gbNumbersPad2"));
        gbNumbersPad2->setMinimumSize(QSize(100, 0));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, gbNumbersPad2);

        SpawnChance_l = new QLabel(gbNumbers);
        SpawnChance_l->setObjectName(QString::fromUtf8("SpawnChance_l"));
        SpawnChance_l->setMinimumSize(QSize(100, 0));
        SpawnChance_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, SpawnChance_l);

        SpawnChance_v = new QSlider(gbNumbers);
        SpawnChance_v->setObjectName(QString::fromUtf8("SpawnChance_v"));
        SpawnChance_v->setMinimum(0);
        SpawnChance_v->setMaximum(100);
        SpawnChance_v->setSliderPosition(100);
        SpawnChance_v->setOrientation(Qt::Horizontal);
        SpawnChance_v->setTickPosition(QSlider::TicksBelow);
        SpawnChance_v->setTickInterval(10);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, SpawnChance_v);


        verticalLayout_2->addWidget(gbNumbers);

        gbPlaceProp = new QGroupBox(tabBasics);
        gbPlaceProp->setObjectName(QString::fromUtf8("gbPlaceProp"));
        formLayout_19 = new QFormLayout(gbPlaceProp);
        formLayout_19->setSpacing(6);
        formLayout_19->setContentsMargins(11, 11, 11, 11);
        formLayout_19->setObjectName(QString::fromUtf8("formLayout_19"));
        PlaceBehavior_l = new QLabel(gbPlaceProp);
        PlaceBehavior_l->setObjectName(QString::fromUtf8("PlaceBehavior_l"));
        PlaceBehavior_l->setMinimumSize(QSize(100, 0));
        PlaceBehavior_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_19->setWidget(0, QFormLayout::LabelRole, PlaceBehavior_l);

        PlaceBehavior_v = new QComboBox(gbPlaceProp);
        PlaceBehavior_v->setObjectName(QString::fromUtf8("PlaceBehavior_v"));
        PlaceBehavior_v->setEnabled(false);

        formLayout_19->setWidget(0, QFormLayout::FieldRole, PlaceBehavior_v);

        TrapDisableChance_v = new QSlider(gbPlaceProp);
        TrapDisableChance_v->setObjectName(QString::fromUtf8("TrapDisableChance_v"));
        TrapDisableChance_v->setEnabled(false);
        TrapDisableChance_v->setMaximum(100);
        TrapDisableChance_v->setOrientation(Qt::Horizontal);
        TrapDisableChance_v->setTickPosition(QSlider::TicksBelow);
        TrapDisableChance_v->setTickInterval(10);

        formLayout_19->setWidget(2, QFormLayout::FieldRole, TrapDisableChance_v);

        RefreshInterval_l = new QLabel(gbPlaceProp);
        RefreshInterval_l->setObjectName(QString::fromUtf8("RefreshInterval_l"));
        RefreshInterval_l->setMinimumSize(QSize(100, 0));
        RefreshInterval_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_19->setWidget(1, QFormLayout::LabelRole, RefreshInterval_l);

        RefreshInterval_v = new QSpinBox(gbPlaceProp);
        RefreshInterval_v->setObjectName(QString::fromUtf8("RefreshInterval_v"));
        RefreshInterval_v->setEnabled(false);
        RefreshInterval_v->setMinimum(1);
        RefreshInterval_v->setMaximum(999);
        RefreshInterval_v->setValue(60);

        formLayout_19->setWidget(1, QFormLayout::FieldRole, RefreshInterval_v);

        TrapDisableChance_l = new QLabel(gbPlaceProp);
        TrapDisableChance_l->setObjectName(QString::fromUtf8("TrapDisableChance_l"));
        TrapDisableChance_l->setMinimumSize(QSize(100, 0));

        formLayout_19->setWidget(2, QFormLayout::LabelRole, TrapDisableChance_l);


        verticalLayout_2->addWidget(gbPlaceProp);

        vSpaceBasics = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(vSpaceBasics);

        twMain->addTab(tabBasics, QString());
        tabState = new QWidget();
        tabState->setObjectName(QString::fromUtf8("tabState"));
        verticalLayout_4 = new QVBoxLayout(tabState);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbForcedState = new QGroupBox(tabState);
        gbForcedState->setObjectName(QString::fromUtf8("gbForcedState"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbForcedState->sizePolicy().hasHeightForWidth());
        gbForcedState->setSizePolicy(sizePolicy);
        formLayout_4 = new QFormLayout(gbForcedState);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        InitialState_l = new QLabel(gbForcedState);
        InitialState_l->setObjectName(QString::fromUtf8("InitialState_l"));
        InitialState_l->setMinimumSize(QSize(100, 0));
        InitialState_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, InitialState_l);

        gbForcedStatePad1 = new QWidget(gbForcedState);
        gbForcedStatePad1->setObjectName(QString::fromUtf8("gbForcedStatePad1"));
        gbForcedStatePad1->setMinimumSize(QSize(100, 0));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, gbForcedStatePad1);

        InitialStateDelay_v = new QSpinBox(gbForcedState);
        InitialStateDelay_v->setObjectName(QString::fromUtf8("InitialStateDelay_v"));
        InitialStateDelay_v->setEnabled(false);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, InitialStateDelay_v);

        InitialState_v = new QComboBox(gbForcedState);
        InitialState_v->setObjectName(QString::fromUtf8("InitialState_v"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, InitialState_v);


        verticalLayout_4->addWidget(gbForcedState);

        gbDelay = new QGroupBox(tabState);
        gbDelay->setObjectName(QString::fromUtf8("gbDelay"));
        formLayout_5 = new QFormLayout(gbDelay);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        RespawnDelay_l = new QLabel(gbDelay);
        RespawnDelay_l->setObjectName(QString::fromUtf8("RespawnDelay_l"));
        RespawnDelay_l->setMinimumSize(QSize(100, 0));
        RespawnDelay_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, RespawnDelay_l);

        RespawnDelayMin_v = new QSpinBox(gbDelay);
        RespawnDelayMin_v->setObjectName(QString::fromUtf8("RespawnDelayMin_v"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, RespawnDelayMin_v);

        RespawnDelayMax_v = new QSpinBox(gbDelay);
        RespawnDelayMax_v->setObjectName(QString::fromUtf8("RespawnDelayMax_v"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, RespawnDelayMax_v);

        RespawnRegulate_v = new QCheckBox(gbDelay);
        RespawnRegulate_v->setObjectName(QString::fromUtf8("RespawnRegulate_v"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, RespawnRegulate_v);

        gbDelayPad1 = new QWidget(gbDelay);
        gbDelayPad1->setObjectName(QString::fromUtf8("gbDelayPad1"));
        gbDelayPad1->setMinimumSize(QSize(100, 0));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, gbDelayPad1);

        gbDelayPad2 = new QWidget(gbDelay);
        gbDelayPad2->setObjectName(QString::fromUtf8("gbDelayPad2"));
        gbDelayPad2->setMinimumSize(QSize(100, 0));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, gbDelayPad2);


        verticalLayout_4->addWidget(gbDelay);

        gbDeactivation = new QGroupBox(tabState);
        gbDeactivation->setObjectName(QString::fromUtf8("gbDeactivation"));
        formLayout_20 = new QFormLayout(gbDeactivation);
        formLayout_20->setSpacing(6);
        formLayout_20->setContentsMargins(11, 11, 11, 11);
        formLayout_20->setObjectName(QString::fromUtf8("formLayout_20"));
        formLayout_20->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        DeactivateCond_l = new QLabel(gbDeactivation);
        DeactivateCond_l->setObjectName(QString::fromUtf8("DeactivateCond_l"));
        DeactivateCond_l->setMinimumSize(QSize(100, 0));
        DeactivateCond_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_20->setWidget(0, QFormLayout::LabelRole, DeactivateCond_l);

        DeactivateCond_v = new QComboBox(gbDeactivation);
        DeactivateCond_v->setObjectName(QString::fromUtf8("DeactivateCond_v"));

        formLayout_20->setWidget(0, QFormLayout::FieldRole, DeactivateCond_v);

        DeactivateSetNum_l = new QLabel(gbDeactivation);
        DeactivateSetNum_l->setObjectName(QString::fromUtf8("DeactivateSetNum_l"));
        DeactivateSetNum_l->setMinimumSize(QSize(100, 0));
        DeactivateSetNum_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_20->setWidget(1, QFormLayout::LabelRole, DeactivateSetNum_l);

        DeactivateSetNum_v = new QSpinBox(gbDeactivation);
        DeactivateSetNum_v->setObjectName(QString::fromUtf8("DeactivateSetNum_v"));
        DeactivateSetNum_v->setEnabled(false);
        DeactivateSetNum_v->setMinimum(1);
        DeactivateSetNum_v->setMaximum(999);

        formLayout_20->setWidget(1, QFormLayout::FieldRole, DeactivateSetNum_v);

        DeactivateScript_l = new QLabel(gbDeactivation);
        DeactivateScript_l->setObjectName(QString::fromUtf8("DeactivateScript_l"));
        DeactivateScript_l->setMinimumSize(QSize(100, 0));
        DeactivateScript_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_20->setWidget(3, QFormLayout::LabelRole, DeactivateScript_l);

        gbDeactivePad1 = new QWidget(gbDeactivation);
        gbDeactivePad1->setObjectName(QString::fromUtf8("gbDeactivePad1"));
        gbDeactivePad1->setMinimumSize(QSize(100, 0));

        formLayout_20->setWidget(2, QFormLayout::LabelRole, gbDeactivePad1);

        DeactivateScriptCheck_v = new QCheckBox(gbDeactivation);
        DeactivateScriptCheck_v->setObjectName(QString::fromUtf8("DeactivateScriptCheck_v"));
        DeactivateScriptCheck_v->setEnabled(false);

        formLayout_20->setWidget(2, QFormLayout::FieldRole, DeactivateScriptCheck_v);

        DeactivateScript_v = new QSpinBox(gbDeactivation);
        DeactivateScript_v->setObjectName(QString::fromUtf8("DeactivateScript_v"));
        DeactivateScript_v->setEnabled(false);

        formLayout_20->setWidget(3, QFormLayout::FieldRole, DeactivateScript_v);


        verticalLayout_4->addWidget(gbDeactivation);

        vSpaceState = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(vSpaceState);

        twMain->addTab(tabState, QString());
        tabProximity = new QWidget();
        tabProximity->setObjectName(QString::fromUtf8("tabProximity"));
        verticalLayout_8 = new QVBoxLayout(tabProximity);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gbPCArea = new QGroupBox(tabProximity);
        gbPCArea->setObjectName(QString::fromUtf8("gbPCArea"));
        formLayout_11 = new QFormLayout(gbPCArea);
        formLayout_11->setSpacing(6);
        formLayout_11->setContentsMargins(11, 11, 11, 11);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        PCAreaDespawn_l = new QLabel(gbPCArea);
        PCAreaDespawn_l->setObjectName(QString::fromUtf8("PCAreaDespawn_l"));
        PCAreaDespawn_l->setMinimumSize(QSize(100, 0));
        PCAreaDespawn_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_11->setWidget(1, QFormLayout::LabelRole, PCAreaDespawn_l);

        PCAreaDespawn_v = new QSpinBox(gbPCArea);
        PCAreaDespawn_v->setObjectName(QString::fromUtf8("PCAreaDespawn_v"));
        PCAreaDespawn_v->setEnabled(false);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, PCAreaDespawn_v);

        gbPCAreaPad1 = new QWidget(gbPCArea);
        gbPCAreaPad1->setObjectName(QString::fromUtf8("gbPCAreaPad1"));
        gbPCAreaPad1->setMinimumSize(QSize(100, 0));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, gbPCAreaPad1);

        PCAreaCheck_v = new QCheckBox(gbPCArea);
        PCAreaCheck_v->setObjectName(QString::fromUtf8("PCAreaCheck_v"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, PCAreaCheck_v);

        gbPCAreaPad2 = new QWidget(gbPCArea);
        gbPCAreaPad2->setObjectName(QString::fromUtf8("gbPCAreaPad2"));
        gbPCAreaPad2->setMinimumSize(QSize(100, 0));

        formLayout_11->setWidget(2, QFormLayout::LabelRole, gbPCAreaPad2);

        PCAreaFullReset_v = new QCheckBox(gbPCArea);
        PCAreaFullReset_v->setObjectName(QString::fromUtf8("PCAreaFullReset_v"));
        PCAreaFullReset_v->setEnabled(false);

        formLayout_11->setWidget(2, QFormLayout::FieldRole, PCAreaFullReset_v);


        verticalLayout_8->addWidget(gbPCArea);

        gbPCDistance = new QGroupBox(tabProximity);
        gbPCDistance->setObjectName(QString::fromUtf8("gbPCDistance"));
        formLayout_12 = new QFormLayout(gbPCDistance);
        formLayout_12->setSpacing(6);
        formLayout_12->setContentsMargins(11, 11, 11, 11);
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        PCDistanceRange_l = new QLabel(gbPCDistance);
        PCDistanceRange_l->setObjectName(QString::fromUtf8("PCDistanceRange_l"));
        PCDistanceRange_l->setMinimumSize(QSize(100, 0));
        PCDistanceRange_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_12->setWidget(1, QFormLayout::LabelRole, PCDistanceRange_l);

        gbPCDistancePad1 = new QWidget(gbPCDistance);
        gbPCDistancePad1->setObjectName(QString::fromUtf8("gbPCDistancePad1"));
        gbPCDistancePad1->setMinimumSize(QSize(100, 0));

        formLayout_12->setWidget(0, QFormLayout::LabelRole, gbPCDistancePad1);

        PCDistanceCheck_v = new QCheckBox(gbPCDistance);
        PCDistanceCheck_v->setObjectName(QString::fromUtf8("PCDistanceCheck_v"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, PCDistanceCheck_v);

        PCDistanceRange_v = new QSpinBox(gbPCDistance);
        PCDistanceRange_v->setObjectName(QString::fromUtf8("PCDistanceRange_v"));
        PCDistanceRange_v->setEnabled(false);
        PCDistanceRange_v->setMinimum(1);
        PCDistanceRange_v->setMaximum(999);

        formLayout_12->setWidget(1, QFormLayout::FieldRole, PCDistanceRange_v);

        gbPCDistancePad2 = new QWidget(gbPCDistance);
        gbPCDistancePad2->setObjectName(QString::fromUtf8("gbPCDistancePad2"));
        gbPCDistancePad2->setMinimumSize(QSize(100, 0));

        formLayout_12->setWidget(2, QFormLayout::LabelRole, gbPCDistancePad2);

        PCDistanceAltCheck_v = new QCheckBox(gbPCDistance);
        PCDistanceAltCheck_v->setObjectName(QString::fromUtf8("PCDistanceAltCheck_v"));
        PCDistanceAltCheck_v->setEnabled(false);

        formLayout_12->setWidget(2, QFormLayout::FieldRole, PCDistanceAltCheck_v);

        PCDistanceAltChecks_l = new QLabel(gbPCDistance);
        PCDistanceAltChecks_l->setObjectName(QString::fromUtf8("PCDistanceAltChecks_l"));
        PCDistanceAltChecks_l->setMinimumSize(QSize(100, 0));
        PCDistanceAltChecks_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_12->setWidget(3, QFormLayout::LabelRole, PCDistanceAltChecks_l);

        PCDistanceAltChecks_v = new QSpinBox(gbPCDistance);
        PCDistanceAltChecks_v->setObjectName(QString::fromUtf8("PCDistanceAltChecks_v"));
        PCDistanceAltChecks_v->setEnabled(false);
        PCDistanceAltChecks_v->setMinimum(1);

        formLayout_12->setWidget(3, QFormLayout::FieldRole, PCDistanceAltChecks_v);


        verticalLayout_8->addWidget(gbPCDistance);

        gbPCProximity = new QGroupBox(tabProximity);
        gbPCProximity->setObjectName(QString::fromUtf8("gbPCProximity"));
        formLayout_13 = new QFormLayout(gbPCProximity);
        formLayout_13->setSpacing(6);
        formLayout_13->setContentsMargins(11, 11, 11, 11);
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        PCProximityDistance_l = new QLabel(gbPCProximity);
        PCProximityDistance_l->setObjectName(QString::fromUtf8("PCProximityDistance_l"));
        PCProximityDistance_l->setMinimumSize(QSize(100, 0));
        PCProximityDistance_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(1, QFormLayout::LabelRole, PCProximityDistance_l);

        PCProximityDistance_v = new QSpinBox(gbPCProximity);
        PCProximityDistance_v->setObjectName(QString::fromUtf8("PCProximityDistance_v"));
        PCProximityDistance_v->setEnabled(false);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, PCProximityDistance_v);

        gbPCProximityPad1 = new QWidget(gbPCProximity);
        gbPCProximityPad1->setObjectName(QString::fromUtf8("gbPCProximityPad1"));
        gbPCProximityPad1->setMinimumSize(QSize(100, 0));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, gbPCProximityPad1);

        gbPCProximityPad2 = new QWidget(gbPCProximity);
        gbPCProximityPad2->setObjectName(QString::fromUtf8("gbPCProximityPad2"));
        gbPCProximityPad2->setMinimumSize(QSize(100, 0));

        formLayout_13->setWidget(2, QFormLayout::LabelRole, gbPCProximityPad2);

        PCProximityDespawnCheck_v = new QCheckBox(gbPCProximity);
        PCProximityDespawnCheck_v->setObjectName(QString::fromUtf8("PCProximityDespawnCheck_v"));
        PCProximityDespawnCheck_v->setEnabled(false);

        formLayout_13->setWidget(2, QFormLayout::FieldRole, PCProximityDespawnCheck_v);

        PCProximityDespawnRange_v = new QSpinBox(gbPCProximity);
        PCProximityDespawnRange_v->setObjectName(QString::fromUtf8("PCProximityDespawnRange_v"));
        PCProximityDespawnRange_v->setEnabled(false);

        formLayout_13->setWidget(3, QFormLayout::FieldRole, PCProximityDespawnRange_v);

        PCProximityDespawnRange_l = new QLabel(gbPCProximity);
        PCProximityDespawnRange_l->setObjectName(QString::fromUtf8("PCProximityDespawnRange_l"));
        PCProximityDespawnRange_l->setMinimumSize(QSize(100, 0));
        PCProximityDespawnRange_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(3, QFormLayout::LabelRole, PCProximityDespawnRange_l);

        PCProximityCheck_v = new QCheckBox(gbPCProximity);
        PCProximityCheck_v->setObjectName(QString::fromUtf8("PCProximityCheck_v"));

        formLayout_13->setWidget(0, QFormLayout::FieldRole, PCProximityCheck_v);


        verticalLayout_8->addWidget(gbPCProximity);

        vSpaceProximity = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(vSpaceProximity);

        twMain->addTab(tabProximity, QString());
        tabPlacement = new QWidget();
        tabPlacement->setObjectName(QString::fromUtf8("tabPlacement"));
        verticalLayout_5 = new QVBoxLayout(tabPlacement);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gbLocation = new QGroupBox(tabPlacement);
        gbLocation->setObjectName(QString::fromUtf8("gbLocation"));
        formLayout_6 = new QFormLayout(gbLocation);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        LocationRange_l = new QLabel(gbLocation);
        LocationRange_l->setObjectName(QString::fromUtf8("LocationRange_l"));
        LocationRange_l->setMinimumSize(QSize(100, 0));
        LocationRange_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, LocationRange_l);

        LocationRangeMin_v = new QSpinBox(gbLocation);
        LocationRangeMin_v->setObjectName(QString::fromUtf8("LocationRangeMin_v"));
        LocationRangeMin_v->setMaximum(99999);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, LocationRangeMin_v);

        LocationRangeMax_v = new QSpinBox(gbLocation);
        LocationRangeMax_v->setObjectName(QString::fromUtf8("LocationRangeMax_v"));
        LocationRangeMax_v->setMaximum(99999);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, LocationRangeMax_v);

        gbLocationPad1 = new QWidget(gbLocation);
        gbLocationPad1->setObjectName(QString::fromUtf8("gbLocationPad1"));
        gbLocationPad1->setMinimumSize(QSize(100, 0));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, gbLocationPad1);

        LocationAtPC_v = new QCheckBox(gbLocation);
        LocationAtPC_v->setObjectName(QString::fromUtf8("LocationAtPC_v"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, LocationAtPC_v);

        gbLocationPad2 = new QWidget(gbLocation);
        gbLocationPad2->setObjectName(QString::fromUtf8("gbLocationPad2"));
        gbLocationPad2->setMinimumSize(QSize(100, 0));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, gbLocationPad2);

        LocationForceRotate_v = new QCheckBox(gbLocation);
        LocationForceRotate_v->setObjectName(QString::fromUtf8("LocationForceRotate_v"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, LocationForceRotate_v);

        gbLocationPad3 = new QWidget(gbLocation);
        gbLocationPad3->setObjectName(QString::fromUtf8("gbLocationPad3"));
        gbLocationPad3->setMinimumSize(QSize(100, 0));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, gbLocationPad3);


        verticalLayout_5->addWidget(gbLocation);

        gbAltLocation = new QGroupBox(tabPlacement);
        gbAltLocation->setObjectName(QString::fromUtf8("gbAltLocation"));
        formLayout_7 = new QFormLayout(gbAltLocation);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        AltLocationWP_l = new QLabel(gbAltLocation);
        AltLocationWP_l->setObjectName(QString::fromUtf8("AltLocationWP_l"));
        sizePolicy.setHeightForWidth(AltLocationWP_l->sizePolicy().hasHeightForWidth());
        AltLocationWP_l->setSizePolicy(sizePolicy);
        AltLocationWP_l->setMinimumSize(QSize(100, 0));
        AltLocationWP_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, AltLocationWP_l);

        gbAltLocationPad1 = new QWidget(gbAltLocation);
        gbAltLocationPad1->setObjectName(QString::fromUtf8("gbAltLocationPad1"));
        gbAltLocationPad1->setMinimumSize(QSize(100, 0));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, gbAltLocationPad1);

        AltLocationCheck_v = new QCheckBox(gbAltLocation);
        AltLocationCheck_v->setObjectName(QString::fromUtf8("AltLocationCheck_v"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, AltLocationCheck_v);

        AltLocationWPLow_v = new QSpinBox(gbAltLocation);
        AltLocationWPLow_v->setObjectName(QString::fromUtf8("AltLocationWPLow_v"));
        AltLocationWPLow_v->setEnabled(false);
        AltLocationWPLow_v->setMinimum(1);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, AltLocationWPLow_v);

        AltLocationWPHigh_v = new QSpinBox(gbAltLocation);
        AltLocationWPHigh_v->setObjectName(QString::fromUtf8("AltLocationWPHigh_v"));
        AltLocationWPHigh_v->setEnabled(false);
        AltLocationWPHigh_v->setMinimum(1);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, AltLocationWPHigh_v);

        gbAltLocationPad2 = new QWidget(gbAltLocation);
        gbAltLocationPad2->setObjectName(QString::fromUtf8("gbAltLocationPad2"));
        gbAltLocationPad2->setMinimumSize(QSize(100, 0));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, gbAltLocationPad2);


        verticalLayout_5->addWidget(gbAltLocation);

        vSpacePlacement = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(vSpacePlacement);

        twMain->addTab(tabPlacement, QString());
        tabEnterExit = new QWidget();
        tabEnterExit->setObjectName(QString::fromUtf8("tabEnterExit"));
        verticalLayout_6 = new QVBoxLayout(tabEnterExit);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gbCustomSpawn = new QGroupBox(tabEnterExit);
        gbCustomSpawn->setObjectName(QString::fromUtf8("gbCustomSpawn"));
        formLayout_8 = new QFormLayout(gbCustomSpawn);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        gbCustomSpawnPad1 = new QWidget(gbCustomSpawn);
        gbCustomSpawnPad1->setObjectName(QString::fromUtf8("gbCustomSpawnPad1"));
        gbCustomSpawnPad1->setMinimumSize(QSize(100, 0));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, gbCustomSpawnPad1);

        CustomSpawnCheck_v = new QCheckBox(gbCustomSpawn);
        CustomSpawnCheck_v->setObjectName(QString::fromUtf8("CustomSpawnCheck_v"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, CustomSpawnCheck_v);

        label_18 = new QLabel(gbCustomSpawn);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 0));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_18);

        CustomSpawnWPLow_v = new QSpinBox(gbCustomSpawn);
        CustomSpawnWPLow_v->setObjectName(QString::fromUtf8("CustomSpawnWPLow_v"));
        CustomSpawnWPLow_v->setEnabled(false);

        formLayout_8->setWidget(1, QFormLayout::FieldRole, CustomSpawnWPLow_v);

        CustomSpawnWPHigh_v = new QSpinBox(gbCustomSpawn);
        CustomSpawnWPHigh_v->setObjectName(QString::fromUtf8("CustomSpawnWPHigh_v"));
        CustomSpawnWPHigh_v->setEnabled(false);

        formLayout_8->setWidget(2, QFormLayout::FieldRole, CustomSpawnWPHigh_v);

        gbCustomSpawnPad2 = new QWidget(gbCustomSpawn);
        gbCustomSpawnPad2->setObjectName(QString::fromUtf8("gbCustomSpawnPad2"));
        gbCustomSpawnPad2->setMinimumSize(QSize(100, 0));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, gbCustomSpawnPad2);


        verticalLayout_6->addWidget(gbCustomSpawn);

        gbCustomDespawn = new QGroupBox(tabEnterExit);
        gbCustomDespawn->setObjectName(QString::fromUtf8("gbCustomDespawn"));
        formLayout_9 = new QFormLayout(gbCustomDespawn);
        formLayout_9->setSpacing(6);
        formLayout_9->setContentsMargins(11, 11, 11, 11);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        gbCustomDespawnPad1 = new QWidget(gbCustomDespawn);
        gbCustomDespawnPad1->setObjectName(QString::fromUtf8("gbCustomDespawnPad1"));
        gbCustomDespawnPad1->setMinimumSize(QSize(100, 0));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, gbCustomDespawnPad1);

        CustomDespawnCheck_v = new QCheckBox(gbCustomDespawn);
        CustomDespawnCheck_v->setObjectName(QString::fromUtf8("CustomDespawnCheck_v"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, CustomDespawnCheck_v);

        CustomDespawnWP_l = new QLabel(gbCustomDespawn);
        CustomDespawnWP_l->setObjectName(QString::fromUtf8("CustomDespawnWP_l"));
        CustomDespawnWP_l->setMinimumSize(QSize(100, 0));
        CustomDespawnWP_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_9->setWidget(1, QFormLayout::LabelRole, CustomDespawnWP_l);

        CustomDespawnWPLow_v = new QSpinBox(gbCustomDespawn);
        CustomDespawnWPLow_v->setObjectName(QString::fromUtf8("CustomDespawnWPLow_v"));
        CustomDespawnWPLow_v->setEnabled(false);

        formLayout_9->setWidget(1, QFormLayout::FieldRole, CustomDespawnWPLow_v);

        CustomDespawnWPHigh_v = new QSpinBox(gbCustomDespawn);
        CustomDespawnWPHigh_v->setObjectName(QString::fromUtf8("CustomDespawnWPHigh_v"));
        CustomDespawnWPHigh_v->setEnabled(false);

        formLayout_9->setWidget(2, QFormLayout::FieldRole, CustomDespawnWPHigh_v);

        gbCustomDespawnPad2 = new QWidget(gbCustomDespawn);
        gbCustomDespawnPad2->setObjectName(QString::fromUtf8("gbCustomDespawnPad2"));
        gbCustomDespawnPad2->setMinimumSize(QSize(100, 0));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, gbCustomDespawnPad2);


        verticalLayout_6->addWidget(gbCustomDespawn);

        gbEffects = new QGroupBox(tabEnterExit);
        gbEffects->setObjectName(QString::fromUtf8("gbEffects"));
        formLayout_21 = new QFormLayout(gbEffects);
        formLayout_21->setSpacing(6);
        formLayout_21->setContentsMargins(11, 11, 11, 11);
        formLayout_21->setObjectName(QString::fromUtf8("formLayout_21"));
        EffectID_l = new QLabel(gbEffects);
        EffectID_l->setObjectName(QString::fromUtf8("EffectID_l"));
        EffectID_l->setMinimumSize(QSize(100, 0));
        EffectID_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_21->setWidget(1, QFormLayout::LabelRole, EffectID_l);

        EffectID_v = new QSpinBox(gbEffects);
        EffectID_v->setObjectName(QString::fromUtf8("EffectID_v"));
        EffectID_v->setEnabled(false);
        EffectID_v->setMaximum(256);

        formLayout_21->setWidget(1, QFormLayout::FieldRole, EffectID_v);

        EffectDuration_l = new QLabel(gbEffects);
        EffectDuration_l->setObjectName(QString::fromUtf8("EffectDuration_l"));
        EffectDuration_l->setMinimumSize(QSize(100, 0));
        EffectDuration_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_21->setWidget(2, QFormLayout::LabelRole, EffectDuration_l);

        EffectDuration_v = new QSpinBox(gbEffects);
        EffectDuration_v->setObjectName(QString::fromUtf8("EffectDuration_v"));
        EffectDuration_v->setEnabled(false);
        EffectDuration_v->setMaximum(999);
        EffectDuration_v->setValue(5);

        formLayout_21->setWidget(2, QFormLayout::FieldRole, EffectDuration_v);

        Effect_l = new QLabel(gbEffects);
        Effect_l->setObjectName(QString::fromUtf8("Effect_l"));
        Effect_l->setMinimumSize(QSize(100, 0));
        Effect_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_21->setWidget(0, QFormLayout::LabelRole, Effect_l);

        Effect_v = new QComboBox(gbEffects);
        Effect_v->setObjectName(QString::fromUtf8("Effect_v"));

        formLayout_21->setWidget(0, QFormLayout::FieldRole, Effect_v);


        verticalLayout_6->addWidget(gbEffects);

        vSpaceEnterExit = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(vSpaceEnterExit);

        twMain->addTab(tabEnterExit, QString());
        tabDateTime = new QWidget();
        tabDateTime->setObjectName(QString::fromUtf8("tabDateTime"));
        verticalLayout_3 = new QVBoxLayout(tabDateTime);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gbDateTime = new QGroupBox(tabDateTime);
        gbDateTime->setObjectName(QString::fromUtf8("gbDateTime"));
        formLayout_3 = new QFormLayout(gbDateTime);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        DayNightCheck_l = new QLabel(gbDateTime);
        DayNightCheck_l->setObjectName(QString::fromUtf8("DayNightCheck_l"));
        DayNightCheck_l->setMinimumSize(QSize(100, 0));
        DayNightCheck_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, DayNightCheck_l);

        DayNightCheck_v = new QComboBox(gbDateTime);
        DayNightCheck_v->setObjectName(QString::fromUtf8("DayNightCheck_v"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, DayNightCheck_v);

        gbDateTimePad1 = new QWidget(gbDateTime);
        gbDateTimePad1->setObjectName(QString::fromUtf8("gbDateTimePad1"));
        gbDateTimePad1->setMinimumSize(QSize(100, 0));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, gbDateTimePad1);

        CheckDayEnable_v = new QCheckBox(gbDateTime);
        CheckDayEnable_v->setObjectName(QString::fromUtf8("CheckDayEnable_v"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, CheckDayEnable_v);

        CheckDayStart_l = new QLabel(gbDateTime);
        CheckDayStart_l->setObjectName(QString::fromUtf8("CheckDayStart_l"));
        CheckDayStart_l->setMinimumSize(QSize(100, 0));
        CheckDayStart_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, CheckDayStart_l);

        CheckDayStart_v = new QSpinBox(gbDateTime);
        CheckDayStart_v->setObjectName(QString::fromUtf8("CheckDayStart_v"));
        CheckDayStart_v->setEnabled(false);
        CheckDayStart_v->setReadOnly(false);
        CheckDayStart_v->setMinimum(1);
        CheckDayStart_v->setMaximum(28);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, CheckDayStart_v);

        CheckDayEnd_l = new QLabel(gbDateTime);
        CheckDayEnd_l->setObjectName(QString::fromUtf8("CheckDayEnd_l"));
        CheckDayEnd_l->setMinimumSize(QSize(100, 0));
        CheckDayEnd_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, CheckDayEnd_l);

        CheckDayEnd_v = new QSpinBox(gbDateTime);
        CheckDayEnd_v->setObjectName(QString::fromUtf8("CheckDayEnd_v"));
        CheckDayEnd_v->setEnabled(false);
        CheckDayEnd_v->setMinimum(1);
        CheckDayEnd_v->setMaximum(28);
        CheckDayEnd_v->setValue(1);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, CheckDayEnd_v);

        gbDateTimePad2 = new QWidget(gbDateTime);
        gbDateTimePad2->setObjectName(QString::fromUtf8("gbDateTimePad2"));
        gbDateTimePad2->setMinimumSize(QSize(100, 0));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, gbDateTimePad2);

        CheckHourEnable_v = new QCheckBox(gbDateTime);
        CheckHourEnable_v->setObjectName(QString::fromUtf8("CheckHourEnable_v"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, CheckHourEnable_v);

        CheckHourStart_l = new QLabel(gbDateTime);
        CheckHourStart_l->setObjectName(QString::fromUtf8("CheckHourStart_l"));
        CheckHourStart_l->setMinimumSize(QSize(100, 0));
        CheckHourStart_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, CheckHourStart_l);

        CheckHourStart_v = new QSpinBox(gbDateTime);
        CheckHourStart_v->setObjectName(QString::fromUtf8("CheckHourStart_v"));
        CheckHourStart_v->setEnabled(false);
        CheckHourStart_v->setMaximum(24);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, CheckHourStart_v);

        CheckHourEnd_l = new QLabel(gbDateTime);
        CheckHourEnd_l->setObjectName(QString::fromUtf8("CheckHourEnd_l"));
        CheckHourEnd_l->setMinimumSize(QSize(100, 0));
        CheckHourEnd_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, CheckHourEnd_l);

        CheckHourEnd_v = new QSpinBox(gbDateTime);
        CheckHourEnd_v->setObjectName(QString::fromUtf8("CheckHourEnd_v"));
        CheckHourEnd_v->setEnabled(false);
        CheckHourEnd_v->setMaximum(24);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, CheckHourEnd_v);


        verticalLayout_3->addWidget(gbDateTime);

        vSpaceDateTime = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(vSpaceDateTime);

        twMain->addTab(tabDateTime, QString());
        tabSpecials = new QWidget();
        tabSpecials->setObjectName(QString::fromUtf8("tabSpecials"));
        verticalLayout_9 = new QVBoxLayout(tabSpecials);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gbAlignment = new QGroupBox(tabSpecials);
        gbAlignment->setObjectName(QString::fromUtf8("gbAlignment"));
        formLayout_14 = new QFormLayout(gbAlignment);
        formLayout_14->setSpacing(6);
        formLayout_14->setContentsMargins(11, 11, 11, 11);
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        gbAlignmentPad1 = new QWidget(gbAlignment);
        gbAlignmentPad1->setObjectName(QString::fromUtf8("gbAlignmentPad1"));
        gbAlignmentPad1->setMinimumSize(QSize(100, 0));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, gbAlignmentPad1);

        AlignmentCheck_v = new QCheckBox(gbAlignment);
        AlignmentCheck_v->setObjectName(QString::fromUtf8("AlignmentCheck_v"));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, AlignmentCheck_v);

        AlignmentAxis_l = new QLabel(gbAlignment);
        AlignmentAxis_l->setObjectName(QString::fromUtf8("AlignmentAxis_l"));
        AlignmentAxis_l->setMinimumSize(QSize(100, 0));
        AlignmentAxis_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(1, QFormLayout::LabelRole, AlignmentAxis_l);

        AlignmentAdjust_l = new QLabel(gbAlignment);
        AlignmentAdjust_l->setObjectName(QString::fromUtf8("AlignmentAdjust_l"));
        AlignmentAdjust_l->setMinimumSize(QSize(100, 0));
        AlignmentAdjust_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(2, QFormLayout::LabelRole, AlignmentAdjust_l);

        AlignmentAxis_v = new QComboBox(gbAlignment);
        AlignmentAxis_v->setObjectName(QString::fromUtf8("AlignmentAxis_v"));
        AlignmentAxis_v->setEnabled(false);

        formLayout_14->setWidget(1, QFormLayout::FieldRole, AlignmentAxis_v);

        AlignmentAdjust_v = new QSpinBox(gbAlignment);
        AlignmentAdjust_v->setObjectName(QString::fromUtf8("AlignmentAdjust_v"));
        AlignmentAdjust_v->setEnabled(false);
        AlignmentAdjust_v->setMinimum(1);
        AlignmentAdjust_v->setMaximum(100);

        formLayout_14->setWidget(2, QFormLayout::FieldRole, AlignmentAdjust_v);


        verticalLayout_9->addWidget(gbAlignment);

        gbFaction = new QGroupBox(tabSpecials);
        gbFaction->setObjectName(QString::fromUtf8("gbFaction"));
        formLayout_15 = new QFormLayout(gbFaction);
        formLayout_15->setSpacing(6);
        formLayout_15->setContentsMargins(11, 11, 11, 11);
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        FactionCheck_v = new QCheckBox(gbFaction);
        FactionCheck_v->setObjectName(QString::fromUtf8("FactionCheck_v"));

        formLayout_15->setWidget(0, QFormLayout::FieldRole, FactionCheck_v);

        FactionSet_l = new QLabel(gbFaction);
        FactionSet_l->setObjectName(QString::fromUtf8("FactionSet_l"));
        FactionSet_l->setMinimumSize(QSize(100, 0));
        FactionSet_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_15->setWidget(1, QFormLayout::LabelRole, FactionSet_l);

        FactionSet_v = new QComboBox(gbFaction);
        FactionSet_v->setObjectName(QString::fromUtf8("FactionSet_v"));
        FactionSet_v->setEnabled(false);

        formLayout_15->setWidget(1, QFormLayout::FieldRole, FactionSet_v);

        gbFactionPad1 = new QWidget(gbFaction);
        gbFactionPad1->setObjectName(QString::fromUtf8("gbFactionPad1"));
        gbFactionPad1->setMinimumSize(QSize(100, 0));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, gbFactionPad1);


        verticalLayout_9->addWidget(gbFaction);

        gbLifespan = new QGroupBox(tabSpecials);
        gbLifespan->setObjectName(QString::fromUtf8("gbLifespan"));
        formLayout_17 = new QFormLayout(gbLifespan);
        formLayout_17->setSpacing(6);
        formLayout_17->setContentsMargins(11, 11, 11, 11);
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        gbLifespanPad1 = new QWidget(gbLifespan);
        gbLifespanPad1->setObjectName(QString::fromUtf8("gbLifespanPad1"));
        gbLifespanPad1->setMinimumSize(QSize(100, 0));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, gbLifespanPad1);

        LifespanCheck_v = new QCheckBox(gbLifespan);
        LifespanCheck_v->setObjectName(QString::fromUtf8("LifespanCheck_v"));

        formLayout_17->setWidget(0, QFormLayout::FieldRole, LifespanCheck_v);

        LifespanTimeMin_l = new QLabel(gbLifespan);
        LifespanTimeMin_l->setObjectName(QString::fromUtf8("LifespanTimeMin_l"));
        LifespanTimeMin_l->setMinimumSize(QSize(100, 0));
        LifespanTimeMin_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_17->setWidget(1, QFormLayout::LabelRole, LifespanTimeMin_l);

        LifespanTimeMax_l = new QLabel(gbLifespan);
        LifespanTimeMax_l->setObjectName(QString::fromUtf8("LifespanTimeMax_l"));
        LifespanTimeMax_l->setMinimumSize(QSize(100, 0));
        LifespanTimeMax_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_17->setWidget(2, QFormLayout::LabelRole, LifespanTimeMax_l);

        LifespanTimeMin_v = new QSpinBox(gbLifespan);
        LifespanTimeMin_v->setObjectName(QString::fromUtf8("LifespanTimeMin_v"));
        LifespanTimeMin_v->setEnabled(false);
        LifespanTimeMin_v->setMinimum(1);
        LifespanTimeMin_v->setMaximum(999);

        formLayout_17->setWidget(1, QFormLayout::FieldRole, LifespanTimeMin_v);

        LifespanTimeMax_v = new QSpinBox(gbLifespan);
        LifespanTimeMax_v->setObjectName(QString::fromUtf8("LifespanTimeMax_v"));
        LifespanTimeMax_v->setEnabled(false);
        LifespanTimeMax_v->setMinimum(1);
        LifespanTimeMax_v->setMaximum(999);

        formLayout_17->setWidget(2, QFormLayout::FieldRole, LifespanTimeMax_v);


        verticalLayout_9->addWidget(gbLifespan);

        gbOther = new QGroupBox(tabSpecials);
        gbOther->setObjectName(QString::fromUtf8("gbOther"));
        formLayout_16 = new QFormLayout(gbOther);
        formLayout_16->setSpacing(6);
        formLayout_16->setContentsMargins(11, 11, 11, 11);
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        gbOtherPad1 = new QWidget(gbOther);
        gbOtherPad1->setObjectName(QString::fromUtf8("gbOtherPad1"));
        gbOtherPad1->setMinimumSize(QSize(100, 0));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, gbOtherPad1);

        FlagPlot_v = new QCheckBox(gbOther);
        FlagPlot_v->setObjectName(QString::fromUtf8("FlagPlot_v"));

        formLayout_16->setWidget(0, QFormLayout::FieldRole, FlagPlot_v);

        Regeneration_l = new QLabel(gbOther);
        Regeneration_l->setObjectName(QString::fromUtf8("Regeneration_l"));
        Regeneration_l->setMinimumSize(QSize(100, 0));
        Regeneration_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_16->setWidget(1, QFormLayout::LabelRole, Regeneration_l);

        Regeneration_v = new QSlider(gbOther);
        Regeneration_v->setObjectName(QString::fromUtf8("Regeneration_v"));
        Regeneration_v->setMaximum(100);
        Regeneration_v->setOrientation(Qt::Horizontal);
        Regeneration_v->setTickPosition(QSlider::TicksBelow);
        Regeneration_v->setTickInterval(10);

        formLayout_16->setWidget(1, QFormLayout::FieldRole, Regeneration_v);

        RegenerationStatusPurge_v = new QCheckBox(gbOther);
        RegenerationStatusPurge_v->setObjectName(QString::fromUtf8("RegenerationStatusPurge_v"));
        RegenerationStatusPurge_v->setEnabled(false);

        formLayout_16->setWidget(2, QFormLayout::FieldRole, RegenerationStatusPurge_v);

        widget = new QWidget(gbOther);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(100, 0));

        formLayout_16->setWidget(2, QFormLayout::LabelRole, widget);


        verticalLayout_9->addWidget(gbOther);

        vSpaceSpecials = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(vSpaceSpecials);

        twMain->addTab(tabSpecials, QString());
        tabCorpse = new QWidget();
        tabCorpse->setObjectName(QString::fromUtf8("tabCorpse"));
        verticalLayout_7 = new QVBoxLayout(tabCorpse);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gbCorpseDecay = new QGroupBox(tabCorpse);
        gbCorpseDecay->setObjectName(QString::fromUtf8("gbCorpseDecay"));
        formLayout_10 = new QFormLayout(gbCorpseDecay);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        CorpseDecayDuration_l = new QLabel(gbCorpseDecay);
        CorpseDecayDuration_l->setObjectName(QString::fromUtf8("CorpseDecayDuration_l"));
        CorpseDecayDuration_l->setMinimumSize(QSize(100, 0));
        CorpseDecayDuration_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(1, QFormLayout::LabelRole, CorpseDecayDuration_l);

        gbCorpseDecayPad1 = new QWidget(gbCorpseDecay);
        gbCorpseDecayPad1->setObjectName(QString::fromUtf8("gbCorpseDecayPad1"));
        gbCorpseDecayPad1->setMinimumSize(QSize(100, 0));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, gbCorpseDecayPad1);

        CorpseDecayCheck_v = new QCheckBox(gbCorpseDecay);
        CorpseDecayCheck_v->setObjectName(QString::fromUtf8("CorpseDecayCheck_v"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, CorpseDecayCheck_v);

        CorpseDecayLoot_l = new QLabel(gbCorpseDecay);
        CorpseDecayLoot_l->setObjectName(QString::fromUtf8("CorpseDecayLoot_l"));
        CorpseDecayLoot_l->setMinimumSize(QSize(100, 0));
        CorpseDecayLoot_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(2, QFormLayout::LabelRole, CorpseDecayLoot_l);

        CorpseDecayLoot_v = new QComboBox(gbCorpseDecay);
        CorpseDecayLoot_v->setObjectName(QString::fromUtf8("CorpseDecayLoot_v"));
        CorpseDecayLoot_v->setEnabled(false);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, CorpseDecayLoot_v);

        CorpseDecayRemains_l = new QLabel(gbCorpseDecay);
        CorpseDecayRemains_l->setObjectName(QString::fromUtf8("CorpseDecayRemains_l"));
        CorpseDecayRemains_l->setMinimumSize(QSize(100, 0));
        CorpseDecayRemains_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(3, QFormLayout::LabelRole, CorpseDecayRemains_l);

        CorpseDecayRemains_v = new QComboBox(gbCorpseDecay);
        CorpseDecayRemains_v->setObjectName(QString::fromUtf8("CorpseDecayRemains_v"));
        CorpseDecayRemains_v->setEnabled(false);

        formLayout_10->setWidget(3, QFormLayout::FieldRole, CorpseDecayRemains_v);

        CorpseDecayDuration_v = new QSpinBox(gbCorpseDecay);
        CorpseDecayDuration_v->setObjectName(QString::fromUtf8("CorpseDecayDuration_v"));
        CorpseDecayDuration_v->setEnabled(false);
        CorpseDecayDuration_v->setMinimum(1);
        CorpseDecayDuration_v->setMaximum(90);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, CorpseDecayDuration_v);


        verticalLayout_7->addWidget(gbCorpseDecay);

        gbGold = new QGroupBox(tabCorpse);
        gbGold->setObjectName(QString::fromUtf8("gbGold"));
        formLayout_18 = new QFormLayout(gbGold);
        formLayout_18->setSpacing(6);
        formLayout_18->setContentsMargins(11, 11, 11, 11);
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        GoldLoot_l = new QLabel(gbGold);
        GoldLoot_l->setObjectName(QString::fromUtf8("GoldLoot_l"));
        GoldLoot_l->setMinimumSize(QSize(100, 0));
        GoldLoot_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_18->setWidget(0, QFormLayout::LabelRole, GoldLoot_l);

        GoldLootMin_v = new QSpinBox(gbGold);
        GoldLootMin_v->setObjectName(QString::fromUtf8("GoldLootMin_v"));
        GoldLootMin_v->setMaximum(99999);

        formLayout_18->setWidget(0, QFormLayout::FieldRole, GoldLootMin_v);

        GoldLootMax_v = new QSpinBox(gbGold);
        GoldLootMax_v->setObjectName(QString::fromUtf8("GoldLootMax_v"));
        GoldLootMax_v->setMaximum(99999);

        formLayout_18->setWidget(1, QFormLayout::FieldRole, GoldLootMax_v);

        gbGoldPad1 = new QWidget(gbGold);
        gbGoldPad1->setObjectName(QString::fromUtf8("gbGoldPad1"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, gbGoldPad1);

        GoldLootChance_l = new QLabel(gbGold);
        GoldLootChance_l->setObjectName(QString::fromUtf8("GoldLootChance_l"));
        GoldLootChance_l->setMinimumSize(QSize(100, 0));
        GoldLootChance_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_18->setWidget(2, QFormLayout::LabelRole, GoldLootChance_l);

        GoldLootChance_v = new QSlider(gbGold);
        GoldLootChance_v->setObjectName(QString::fromUtf8("GoldLootChance_v"));
        GoldLootChance_v->setMaximum(100);
        GoldLootChance_v->setValue(100);
        GoldLootChance_v->setOrientation(Qt::Horizontal);
        GoldLootChance_v->setInvertedAppearance(false);
        GoldLootChance_v->setInvertedControls(false);
        GoldLootChance_v->setTickPosition(QSlider::TicksBelow);
        GoldLootChance_v->setTickInterval(10);

        formLayout_18->setWidget(2, QFormLayout::FieldRole, GoldLootChance_v);


        verticalLayout_7->addWidget(gbGold);

        gbLoot = new QGroupBox(tabCorpse);
        gbLoot->setObjectName(QString::fromUtf8("gbLoot"));
        formLayout_22 = new QFormLayout(gbLoot);
        formLayout_22->setSpacing(6);
        formLayout_22->setContentsMargins(11, 11, 11, 11);
        formLayout_22->setObjectName(QString::fromUtf8("formLayout_22"));
        gbLootPad1 = new QWidget(gbLoot);
        gbLootPad1->setObjectName(QString::fromUtf8("gbLootPad1"));
        gbLootPad1->setMinimumSize(QSize(100, 0));

        formLayout_22->setWidget(0, QFormLayout::LabelRole, gbLootPad1);

        LootCheck_v = new QCheckBox(gbLoot);
        LootCheck_v->setObjectName(QString::fromUtf8("LootCheck_v"));

        formLayout_22->setWidget(0, QFormLayout::FieldRole, LootCheck_v);

        LootStore_l = new QLabel(gbLoot);
        LootStore_l->setObjectName(QString::fromUtf8("LootStore_l"));
        LootStore_l->setMinimumSize(QSize(100, 0));
        LootStore_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_22->setWidget(1, QFormLayout::LabelRole, LootStore_l);

        LootStore_v = new QSpinBox(gbLoot);
        LootStore_v->setObjectName(QString::fromUtf8("LootStore_v"));
        LootStore_v->setEnabled(false);
        LootStore_v->setMinimum(500);
        LootStore_v->setMaximum(999);

        formLayout_22->setWidget(1, QFormLayout::FieldRole, LootStore_v);

        LootSpawn1_l = new QLabel(gbLoot);
        LootSpawn1_l->setObjectName(QString::fromUtf8("LootSpawn1_l"));
        LootSpawn1_l->setMinimumSize(QSize(100, 0));
        LootSpawn1_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_22->setWidget(2, QFormLayout::LabelRole, LootSpawn1_l);

        LootSpawn2_l = new QLabel(gbLoot);
        LootSpawn2_l->setObjectName(QString::fromUtf8("LootSpawn2_l"));
        LootSpawn2_l->setMinimumSize(QSize(100, 0));
        LootSpawn2_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_22->setWidget(3, QFormLayout::LabelRole, LootSpawn2_l);

        LootSpawn3_l = new QLabel(gbLoot);
        LootSpawn3_l->setObjectName(QString::fromUtf8("LootSpawn3_l"));
        LootSpawn3_l->setMinimumSize(QSize(100, 0));
        LootSpawn3_l->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_22->setWidget(4, QFormLayout::LabelRole, LootSpawn3_l);

        LootSpawn1_v = new QSlider(gbLoot);
        LootSpawn1_v->setObjectName(QString::fromUtf8("LootSpawn1_v"));
        LootSpawn1_v->setEnabled(false);
        LootSpawn1_v->setMaximum(100);
        LootSpawn1_v->setValue(50);
        LootSpawn1_v->setOrientation(Qt::Horizontal);
        LootSpawn1_v->setTickPosition(QSlider::TicksBelow);
        LootSpawn1_v->setTickInterval(10);

        formLayout_22->setWidget(2, QFormLayout::FieldRole, LootSpawn1_v);

        LootSpawn2_v = new QSlider(gbLoot);
        LootSpawn2_v->setObjectName(QString::fromUtf8("LootSpawn2_v"));
        LootSpawn2_v->setEnabled(false);
        LootSpawn2_v->setMaximum(100);
        LootSpawn2_v->setValue(15);
        LootSpawn2_v->setOrientation(Qt::Horizontal);
        LootSpawn2_v->setTickPosition(QSlider::TicksBelow);
        LootSpawn2_v->setTickInterval(10);

        formLayout_22->setWidget(3, QFormLayout::FieldRole, LootSpawn2_v);

        LootSpawn3_v = new QSlider(gbLoot);
        LootSpawn3_v->setObjectName(QString::fromUtf8("LootSpawn3_v"));
        LootSpawn3_v->setEnabled(false);
        LootSpawn3_v->setMaximum(100);
        LootSpawn3_v->setValue(5);
        LootSpawn3_v->setOrientation(Qt::Horizontal);
        LootSpawn3_v->setTickPosition(QSlider::TicksBelow);
        LootSpawn3_v->setTickInterval(10);

        formLayout_22->setWidget(4, QFormLayout::FieldRole, LootSpawn3_v);


        verticalLayout_7->addWidget(gbLoot);

        vSpaceCorpse = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(vSpaceCorpse);

        twMain->addTab(tabCorpse, QString());

        verticalLayout->addWidget(twMain);


        horizontalLayout->addLayout(verticalLayout);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);
        QObject::connect(InitialState_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(InitialState_Changed()));
        QObject::connect(DeactivateCond_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(DeactivateCond_Changed()));
        QObject::connect(CycleRate_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CycleRate_Changed()));
        QObject::connect(CycleOffset_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CycleOffset_Changed()));
        QObject::connect(TotalSpawnsMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(TotalSpawnsMin_Changed()));
        QObject::connect(SpawnChance_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(SpawnChance_Changed()));
        QObject::connect(SpawnsPerCycleMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(SpawnsPerCycleMin_Changed()));
        QObject::connect(SpawnsPerCycleMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(SpawnsPerCycleMax_Changed()));
        QObject::connect(SpawnType_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(SpawnType_Changed()));
        QObject::connect(PlaceBehavior_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(PlaceBehavior_Changed()));
        QObject::connect(RefreshInterval_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(RefreshInterval_Changed()));
        QObject::connect(TrapDisableChance_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(TrapDisableChance_Changed()));
        QObject::connect(InitialStateDelay_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(InitialStateDelay_Changed()));
        QObject::connect(InitialState_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(InitialState_Changed()));
        QObject::connect(RespawnDelayMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(RespawnDelayMin_Changed()));
        QObject::connect(RespawnDelayMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(RespawnDelayMax_Changed()));
        QObject::connect(TotalSpawnsMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(TotalSpawnsMax_Changed()));
        QObject::connect(RespawnRegulate_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(RespawnRegulate_Changed()));
        QObject::connect(DeactivateSetNum_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(DeactivateSetNum_Changed()));
        QObject::connect(DeactivateScriptCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(DeactivateScriptCheck_Changed()));
        QObject::connect(DeactivateScript_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(DeactivateScript_Changed()));
        QObject::connect(PCAreaCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCAreaCheck_Changed()));
        QObject::connect(PCAreaDespawn_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(PCAreaDespawn_Changed()));
        QObject::connect(PCAreaFullReset_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCAreaFullReset_Changed()));
        QObject::connect(PCDistanceCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCDistanceCheck_Changed()));
        QObject::connect(PCDistanceRange_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(PCDistanceRange_Changed()));
        QObject::connect(PCDistanceAltChecks_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(PCDistanceAltChecks_Changed()));
        QObject::connect(PCDistanceAltCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCDistanceAltCheck_Changed()));
        QObject::connect(PCProximityCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCProximityCheck_Changed()));
        QObject::connect(PCProximityDistance_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(PCProximityDistance_Changed()));
        QObject::connect(PCProximityDespawnCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(PCProximityDespawnCheck_Changed()));
        QObject::connect(PCProximityDespawnRange_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(PCProximityDespawnRange_Changed()));
        QObject::connect(LocationRangeMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LocationRangeMin_Changed()));
        QObject::connect(LocationRangeMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LocationRangeMax_Changed()));
        QObject::connect(LocationAtPC_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(LocationAtPC_Changed()));
        QObject::connect(LocationForceRotate_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(LocationForceRotate_Changed()));
        QObject::connect(AltLocationCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(AltLocationCheck_Changed()));
        QObject::connect(AltLocationWPLow_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(AltLocationWPLow_Changed()));
        QObject::connect(AltLocationWPHigh_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(AltLocationWPHigh_Changed()));
        QObject::connect(CustomSpawnCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(CustomSpawnCheck_Changed()));
        QObject::connect(CustomSpawnWPLow_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CustomSpawnWPLow_Changed()));
        QObject::connect(CustomSpawnWPHigh_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CustomSpawnWPHigh_Changed()));
        QObject::connect(CustomDespawnCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(CustomDespawnCheck_Changed()));
        QObject::connect(CustomDespawnWPLow_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CustomDespawnWPLow_Changed()));
        QObject::connect(CustomDespawnWPHigh_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CustomDespawnWPHigh_Changed()));
        QObject::connect(Effect_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(Effect_Changed()));
        QObject::connect(EffectID_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(EffectID_Changed()));
        QObject::connect(EffectDuration_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(EffectDuration_Changed()));
        QObject::connect(DayNightCheck_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(DayNightCheck_Changed()));
        QObject::connect(CheckDayEnable_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(CheckDayEnable_Changed()));
        QObject::connect(CheckDayStart_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CheckDayStart_Changed()));
        QObject::connect(CheckDayEnd_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CheckDayEnd_Changed()));
        QObject::connect(CheckHourEnable_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(CheckHourEnable_Changed()));
        QObject::connect(CheckHourStart_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CheckHourStart_Changed()));
        QObject::connect(CheckHourEnd_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(CheckHourEnd_Changed()));
        QObject::connect(AlignmentCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(AlignmentCheck_Changed()));
        QObject::connect(AlignmentAxis_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(AlignmentAxis_Changed()));
        QObject::connect(AlignmentAdjust_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(AlignmentAdjust_Changed()));
        QObject::connect(FactionCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(FactionCheck_Changed()));
        QObject::connect(FactionSet_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(FactionSet_Changed()));
        QObject::connect(LifespanCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(LifespanCheck_Changed()));
        QObject::connect(LifespanTimeMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LifespanTimeMin_Changed()));
        QObject::connect(LifespanTimeMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LifespanTimeMax_Changed()));
        QObject::connect(FlagPlot_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(FlagPlot_Changed()));
        QObject::connect(Regeneration_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(Regeneration_Changed()));
        QObject::connect(RegenerationStatusPurge_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(RegenerationStatusPurge_Changed()));
        QObject::connect(CorpseDecayCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(CorpseDecayCheck_Changed()));
        QObject::connect(CorpseDecayDuration_v, SIGNAL(valueChanged(QString)), MainWindowClass, SLOT(CorpseDecayDuration_Changed()));
        QObject::connect(CorpseDecayLoot_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(CorpseDecayLoot_Changed()));
        QObject::connect(CorpseDecayRemains_v, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(CorpseDecayRemains_Changed()));
        QObject::connect(GoldLootMin_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(GoldLootMin_Changed()));
        QObject::connect(GoldLootMax_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(GoldLootMax_Changed()));
        QObject::connect(GoldLootChance_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(GoldLootChance_Changed()));
        QObject::connect(LootCheck_v, SIGNAL(stateChanged(int)), MainWindowClass, SLOT(LootCheck_Changed()));
        QObject::connect(LootStore_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LootStore_Changed()));
        QObject::connect(LootSpawn1_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LootSpawn1_Changed()));
        QObject::connect(LootSpawn2_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LootSpawn2_Changed()));
        QObject::connect(LootSpawn3_v, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(LootSpawn3_Changed()));

        twMain->setCurrentIndex(0);
        InitialState_v->setCurrentIndex(2);
        DeactivateCond_v->setCurrentIndex(7);
        CorpseDecayLoot_v->setCurrentIndex(4);
        CorpseDecayRemains_v->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "NESS.Gen - Dead Simple NESS Flag Generation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        MainWindowClass->setStatusTip(QApplication::translate("MainWindowClass", "NESS.Gen v1.0 by FoamBats4All", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbSpawnPoint->setTitle(QApplication::translate("MainWindowClass", "Spawn Point", 0, QApplication::UnicodeUTF8));
        CycleRate_l->setText(QApplication::translate("MainWindowClass", "Cycle Rate:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CycleRate_v->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        CycleRate_v->setStatusTip(QApplication::translate("MainWindowClass", "Seconds between spawn cycles.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CycleRate_v->setSuffix(QApplication::translate("MainWindowClass", " seconds", 0, QApplication::UnicodeUTF8));
        CycleOffset_l->setText(QApplication::translate("MainWindowClass", "Offset:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CycleOffset_v->setStatusTip(QApplication::translate("MainWindowClass", "Offsets a cycle. Useful for staggering spawns on the same heartbeat.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CycleOffset_v->setSuffix(QApplication::translate("MainWindowClass", " heartbeats", 0, QApplication::UnicodeUTF8));
        SpawnType_l->setText(QApplication::translate("MainWindowClass", "Type:", 0, QApplication::UnicodeUTF8));
        SpawnType_v->clear();
        SpawnType_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Creature", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Group", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Placeable", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Item", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        SpawnType_v->setStatusTip(QApplication::translate("MainWindowClass", "Determines if the spawn is for a creature, group, placeable, or item.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbNumbers->setTitle(QApplication::translate("MainWindowClass", "Numbers", 0, QApplication::UnicodeUTF8));
        TotalSpawns_l->setText(QApplication::translate("MainWindowClass", "Total Spawns:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TotalSpawnsMin_v->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        TotalSpawnsMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Minimum number of creatures to be maintained.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TotalSpawnsMin_v->setSuffix(QApplication::translate("MainWindowClass", " minimum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TotalSpawnsMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Maximum number of creatures to be maintained.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TotalSpawnsMax_v->setSuffix(QApplication::translate("MainWindowClass", " maximum", 0, QApplication::UnicodeUTF8));
        SpawnsPerCycle_l->setText(QApplication::translate("MainWindowClass", "Spawns per Cycle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SpawnsPerCycleMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Minimum number of spawns per cycle.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SpawnsPerCycleMin_v->setSuffix(QApplication::translate("MainWindowClass", " minimum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SpawnsPerCycleMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Maximum number of spawns per cycle.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SpawnsPerCycleMax_v->setSuffix(QApplication::translate("MainWindowClass", " maximum", 0, QApplication::UnicodeUTF8));
        SpawnChance_l->setText(QApplication::translate("MainWindowClass", "Spawn Chance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SpawnChance_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of a spawn happening (1-100%).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbPlaceProp->setTitle(QApplication::translate("MainWindowClass", "Placeable Properties", 0, QApplication::UnicodeUTF8));
        PlaceBehavior_l->setText(QApplication::translate("MainWindowClass", "Behavior:", 0, QApplication::UnicodeUTF8));
        PlaceBehavior_v->clear();
        PlaceBehavior_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Default behavior", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Despawn if empty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Refill if empty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Refresh at an interval", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        PlaceBehavior_v->setStatusTip(QApplication::translate("MainWindowClass", "Behavior of a placeable after it spawns.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        TrapDisableChance_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of the placeable spawning with its trap disabled. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RefreshInterval_l->setText(QApplication::translate("MainWindowClass", "Refresh Interval:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        RefreshInterval_v->setStatusTip(QApplication::translate("MainWindowClass", "Interval that the placeable will refresh itself, if specified above.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RefreshInterval_v->setSuffix(QApplication::translate("MainWindowClass", " minutes", 0, QApplication::UnicodeUTF8));
        TrapDisableChance_l->setText(QApplication::translate("MainWindowClass", "Trap Disable Chance:", 0, QApplication::UnicodeUTF8));
        twMain->setTabText(twMain->indexOf(tabBasics), QApplication::translate("MainWindowClass", "Basics", 0, QApplication::UnicodeUTF8));
        gbForcedState->setTitle(QApplication::translate("MainWindowClass", "Forced State", 0, QApplication::UnicodeUTF8));
        InitialState_l->setText(QApplication::translate("MainWindowClass", "Initial State:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        InitialStateDelay_v->setStatusTip(QApplication::translate("MainWindowClass", "Number of minutes to delay the initial state force.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        InitialStateDelay_v->setSuffix(QApplication::translate("MainWindowClass", " minute delay.", 0, QApplication::UnicodeUTF8));
        InitialState_v->clear();
        InitialState_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Disabled", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Enabled", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "None", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        InitialState_v->setStatusTip(QApplication::translate("MainWindowClass", "Set a custom forced initial state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbDelay->setTitle(QApplication::translate("MainWindowClass", "Delay", 0, QApplication::UnicodeUTF8));
        RespawnDelay_l->setText(QApplication::translate("MainWindowClass", "Respawn Delay:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        RespawnDelayMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Minimum number of minutes (since death) for a respawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RespawnDelayMin_v->setSuffix(QApplication::translate("MainWindowClass", " minutes (minimum)", 0, QApplication::UnicodeUTF8));
        RespawnDelayMin_v->setPrefix(QString());
#ifndef QT_NO_STATUSTIP
        RespawnDelayMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Maximum number of minutes (since death) for a respawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RespawnDelayMax_v->setSuffix(QApplication::translate("MainWindowClass", " minutes (maximum)", 0, QApplication::UnicodeUTF8));
        RespawnDelayMax_v->setPrefix(QString());
#ifndef QT_NO_STATUSTIP
        RespawnRegulate_v->setStatusTip(QApplication::translate("MainWindowClass", "Regular schedule for respawning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RespawnRegulate_v->setText(QApplication::translate("MainWindowClass", "Regulate respawning.", 0, QApplication::UnicodeUTF8));
        gbDeactivation->setTitle(QApplication::translate("MainWindowClass", "Deactivation", 0, QApplication::UnicodeUTF8));
        DeactivateCond_l->setText(QApplication::translate("MainWindowClass", "Condition:", 0, QApplication::UnicodeUTF8));
        DeactivateCond_v->clear();
        DeactivateCond_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "If all children are dead", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "If spawn number has been spawned", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Until all children are dead", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "After a set number of children die :(", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "After a set number of minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "After a set number of cycles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "When spawn count equals spawn number", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Never", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        DeactivateCond_v->setStatusTip(QApplication::translate("MainWindowClass", "Condition that a spawn will deactivate itself.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DeactivateSetNum_l->setText(QApplication::translate("MainWindowClass", "\"Set Number\":", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DeactivateSetNum_v->setStatusTip(QApplication::translate("MainWindowClass", "Number of children, minutes, or cycles, if specified above.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DeactivateSetNum_v->setSuffix(QString());
        DeactivateScript_l->setText(QApplication::translate("MainWindowClass", "Script Entry:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DeactivateScriptCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Execute a script entry when deactivated.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DeactivateScriptCheck_v->setText(QApplication::translate("MainWindowClass", "Run script entry when disabled", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DeactivateScript_v->setStatusTip(QApplication::translate("MainWindowClass", "ID of the script entry to run.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        twMain->setTabText(twMain->indexOf(tabState), QApplication::translate("MainWindowClass", "State", 0, QApplication::UnicodeUTF8));
        gbPCArea->setTitle(QApplication::translate("MainWindowClass", "PC in Area", 0, QApplication::UnicodeUTF8));
        PCAreaDespawn_l->setText(QApplication::translate("MainWindowClass", "Despawn Delay:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCAreaDespawn_v->setStatusTip(QApplication::translate("MainWindowClass", "Delay after all PCs exit the area that the spawn despawns.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCAreaDespawn_v->setSuffix(QApplication::translate("MainWindowClass", " minutes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCAreaCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable PC area checks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCAreaCheck_v->setText(QApplication::translate("MainWindowClass", "Spawn only if a PC is in the area", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCAreaFullReset_v->setStatusTip(QApplication::translate("MainWindowClass", "Reset the spawn entirely to its initial state once there are no PCs.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCAreaFullReset_v->setText(QApplication::translate("MainWindowClass", "Fully reset spawn", 0, QApplication::UnicodeUTF8));
        gbPCDistance->setTitle(QApplication::translate("MainWindowClass", "PC Distance Requirments", 0, QApplication::UnicodeUTF8));
        PCDistanceRange_l->setText(QApplication::translate("MainWindowClass", "Distance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCDistanceCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable PC distance checks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCDistanceCheck_v->setText(QApplication::translate("MainWindowClass", "Disable spawns if PCs are too close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCDistanceRange_v->setStatusTip(QApplication::translate("MainWindowClass", "Distance PCs must be to enable spawns.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCDistanceRange_v->setSuffix(QApplication::translate("MainWindowClass", " meters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCDistanceAltCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Check at spawn locations, and not at the waypoint.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCDistanceAltCheck_v->setText(QApplication::translate("MainWindowClass", "Check alternative spawn locations", 0, QApplication::UnicodeUTF8));
        PCDistanceAltChecks_l->setText(QApplication::translate("MainWindowClass", "Spawn Attempts:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCDistanceAltChecks_v->setStatusTip(QApplication::translate("MainWindowClass", "Number of alternative spawn attempts before giving up.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbPCProximity->setTitle(QApplication::translate("MainWindowClass", "PC Proximity Trigger", 0, QApplication::UnicodeUTF8));
        PCProximityDistance_l->setText(QApplication::translate("MainWindowClass", "Distance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCProximityDistance_v->setStatusTip(QApplication::translate("MainWindowClass", "Distance PCs must be within for spawns to occur.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCProximityDistance_v->setSuffix(QApplication::translate("MainWindowClass", " meters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCProximityDespawnCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Remove spawns if PCs leave a range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCProximityDespawnCheck_v->setText(QApplication::translate("MainWindowClass", "Despawn if PCs are not within range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCProximityDespawnRange_v->setStatusTip(QApplication::translate("MainWindowClass", "Range PCs must travel to force despawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCProximityDespawnRange_v->setSuffix(QApplication::translate("MainWindowClass", " meters", 0, QApplication::UnicodeUTF8));
        PCProximityDespawnRange_l->setText(QApplication::translate("MainWindowClass", "Range:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        PCProximityCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable PC distance checks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        PCProximityCheck_v->setText(QApplication::translate("MainWindowClass", "Disable spawns if PCs are too far", 0, QApplication::UnicodeUTF8));
        twMain->setTabText(twMain->indexOf(tabProximity), QApplication::translate("MainWindowClass", "Proximity", 0, QApplication::UnicodeUTF8));
        gbLocation->setTitle(QApplication::translate("MainWindowClass", "Location and Bearing", 0, QApplication::UnicodeUTF8));
        LocationRange_l->setText(QApplication::translate("MainWindowClass", "Distance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LocationRangeMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Minimum distance from the waypoint to spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LocationRangeMin_v->setSuffix(QApplication::translate("MainWindowClass", " meters (minimum)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LocationRangeMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Maximum distance from the waypoint to spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LocationRangeMax_v->setSuffix(QApplication::translate("MainWindowClass", " meters (maximum)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LocationAtPC_v->setStatusTip(QApplication::translate("MainWindowClass", "Spawn at a random PC's position within range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LocationAtPC_v->setText(QApplication::translate("MainWindowClass", "Spawn at PC position", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LocationForceRotate_v->setStatusTip(QApplication::translate("MainWindowClass", "Force spawn to face the waypoint's direction.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LocationForceRotate_v->setText(QApplication::translate("MainWindowClass", "Enforce bearing", 0, QApplication::UnicodeUTF8));
        gbAltLocation->setTitle(QApplication::translate("MainWindowClass", "Alternate Spawn Location", 0, QApplication::UnicodeUTF8));
        AltLocationWP_l->setText(QApplication::translate("MainWindowClass", "Waypoint:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        AltLocationCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Redundant with an entrance spawn point.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        AltLocationCheck_v->setText(QApplication::translate("MainWindowClass", "Use alternative spawn locations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        AltLocationWPLow_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the waypoint to spawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        AltLocationWPLow_v->setPrefix(QApplication::translate("MainWindowClass", "SL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        AltLocationWPHigh_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the waypoint to spawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        AltLocationWPHigh_v->setPrefix(QApplication::translate("MainWindowClass", "SL", 0, QApplication::UnicodeUTF8));
        twMain->setTabText(twMain->indexOf(tabPlacement), QApplication::translate("MainWindowClass", "Placement", 0, QApplication::UnicodeUTF8));
        gbCustomSpawn->setTitle(QApplication::translate("MainWindowClass", "Custom Spawn Waypoints", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomSpawnCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable spawning at tagged waypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomSpawnCheck_v->setText(QApplication::translate("MainWindowClass", "Use custom spawn waypoint", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowClass", "Waypoint:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomSpawnWPLow_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the first possible waypoint to spawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomSpawnWPLow_v->setPrefix(QApplication::translate("MainWindowClass", "EE", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomSpawnWPHigh_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the last possible waypoint to spawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomSpawnWPHigh_v->setPrefix(QApplication::translate("MainWindowClass", "EE", 0, QApplication::UnicodeUTF8));
        gbCustomDespawn->setTitle(QApplication::translate("MainWindowClass", "Custom Despawn Waypoints", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomDespawnCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable despawning at tagged waypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomDespawnCheck_v->setText(QApplication::translate("MainWindowClass", "Use custom despawn waypoint", 0, QApplication::UnicodeUTF8));
        CustomDespawnWP_l->setText(QApplication::translate("MainWindowClass", "Waypoint:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomDespawnWPLow_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the first possible waypoint to despawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomDespawnWPLow_v->setPrefix(QApplication::translate("MainWindowClass", "EX", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CustomDespawnWPHigh_v->setStatusTip(QApplication::translate("MainWindowClass", "Tag of the last possible waypoint to despawn at.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CustomDespawnWPHigh_v->setPrefix(QApplication::translate("MainWindowClass", "EX", 0, QApplication::UnicodeUTF8));
        gbEffects->setTitle(QApplication::translate("MainWindowClass", "Spawn Effect", 0, QApplication::UnicodeUTF8));
        EffectID_l->setText(QApplication::translate("MainWindowClass", "Spawn Effect ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        EffectID_v->setStatusTip(QApplication::translate("MainWindowClass", "Effect ID to launch on spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        EffectDuration_l->setText(QApplication::translate("MainWindowClass", "Duration:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        EffectDuration_v->setStatusTip(QApplication::translate("MainWindowClass", "Duration of the effect. A duration of 0 is permanent. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        EffectDuration_v->setSuffix(QApplication::translate("MainWindowClass", " seconds", 0, QApplication::UnicodeUTF8));
        Effect_l->setText(QApplication::translate("MainWindowClass", "Effect:", 0, QApplication::UnicodeUTF8));
        Effect_v->clear();
        Effect_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Area Effect (AOE)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Visual Effect (VFX)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Object Effect (VFX)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        Effect_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable visual effects upon spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        twMain->setTabText(twMain->indexOf(tabEnterExit), QApplication::translate("MainWindowClass", "Entrance/Exit", 0, QApplication::UnicodeUTF8));
        gbDateTime->setTitle(QApplication::translate("MainWindowClass", "Date && Time", 0, QApplication::UnicodeUTF8));
        DayNightCheck_l->setText(QApplication::translate("MainWindowClass", "Day/Night Checks:", 0, QApplication::UnicodeUTF8));
        DayNightCheck_v->clear();
        DayNightCheck_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Day only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Day only, despawn at dusk", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Night only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Night only, despawn at dawn", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        DayNightCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Allow spawns only at day or night.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        CheckDayEnable_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable specific day checks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CheckDayEnable_v->setText(QApplication::translate("MainWindowClass", "Limit spawns to specific days of the month", 0, QApplication::UnicodeUTF8));
        CheckDayStart_l->setText(QApplication::translate("MainWindowClass", "Start Day:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CheckDayStart_v->setStatusTip(QApplication::translate("MainWindowClass", "The first day of the month the spawn will be active.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CheckDayStart_v->setSuffix(QString());
        CheckDayStart_v->setPrefix(QString());
        CheckDayEnd_l->setText(QApplication::translate("MainWindowClass", "End Day:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CheckDayEnd_v->setStatusTip(QApplication::translate("MainWindowClass", "The last day of the month the spawn will be active.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CheckDayEnd_v->setSuffix(QString());
        CheckDayEnd_v->setPrefix(QString());
#ifndef QT_NO_STATUSTIP
        CheckHourEnable_v->setStatusTip(QApplication::translate("MainWindowClass", "Enable specific hour checks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CheckHourEnable_v->setText(QApplication::translate("MainWindowClass", "Limit spawns to specific hours of the day", 0, QApplication::UnicodeUTF8));
        CheckHourStart_l->setText(QApplication::translate("MainWindowClass", "Spawn Hour:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CheckHourStart_v->setStatusTip(QApplication::translate("MainWindowClass", "Earliest hour the spawn will be active.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CheckHourEnd_l->setText(QApplication::translate("MainWindowClass", "Despawn Hour:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CheckHourEnd_v->setStatusTip(QApplication::translate("MainWindowClass", "Last hour the spawn will be active.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        twMain->setTabText(twMain->indexOf(tabDateTime), QApplication::translate("MainWindowClass", "Date && Time", 0, QApplication::UnicodeUTF8));
        gbAlignment->setTitle(QApplication::translate("MainWindowClass", "Alignment", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        AlignmentCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Adjust alignment of the spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        AlignmentCheck_v->setText(QApplication::translate("MainWindowClass", "Adjust alignment of spawns", 0, QApplication::UnicodeUTF8));
        AlignmentAxis_l->setText(QApplication::translate("MainWindowClass", "Axis:", 0, QApplication::UnicodeUTF8));
        AlignmentAdjust_l->setText(QApplication::translate("MainWindowClass", "Adjustment:", 0, QApplication::UnicodeUTF8));
        AlignmentAxis_v->clear();
        AlignmentAxis_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Neutral", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Lawful", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Chaos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Good", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Evil", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "All", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        AlignmentAxis_v->setStatusTip(QApplication::translate("MainWindowClass", "Axis to shift alignment towards.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        AlignmentAdjust_v->setStatusTip(QApplication::translate("MainWindowClass", "Amount to shift the alignment.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbFaction->setTitle(QApplication::translate("MainWindowClass", "Faction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        FactionCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Set the faction of the spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        FactionCheck_v->setText(QApplication::translate("MainWindowClass", "Adjust faction of spawns", 0, QApplication::UnicodeUTF8));
        FactionSet_l->setText(QApplication::translate("MainWindowClass", "Faction:", 0, QApplication::UnicodeUTF8));
        FactionSet_v->clear();
        FactionSet_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Commoner", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Defender", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Merchant", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Hostile", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        FactionSet_v->setStatusTip(QApplication::translate("MainWindowClass", "Faction to set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbLifespan->setTitle(QApplication::translate("MainWindowClass", "Lifespan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LifespanCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Set the explicit lifespan of a spawn.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LifespanCheck_v->setText(QApplication::translate("MainWindowClass", "Despawn after a certain amount of time", 0, QApplication::UnicodeUTF8));
        LifespanTimeMin_l->setText(QApplication::translate("MainWindowClass", "Minimum Time:", 0, QApplication::UnicodeUTF8));
        LifespanTimeMax_l->setText(QApplication::translate("MainWindowClass", "Maximum Time:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LifespanTimeMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Despawn at a random interval between the minimum and maximum time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LifespanTimeMin_v->setSuffix(QApplication::translate("MainWindowClass", " minutes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LifespanTimeMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Despawn at a random interval between the minimum and maximum time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LifespanTimeMax_v->setSuffix(QApplication::translate("MainWindowClass", " minutes", 0, QApplication::UnicodeUTF8));
        gbOther->setTitle(QApplication::translate("MainWindowClass", "Other", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        FlagPlot_v->setStatusTip(QApplication::translate("MainWindowClass", "Spawn with the \"plot\" flag set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        FlagPlot_v->setText(QApplication::translate("MainWindowClass", "Flag spawn as a plot object", 0, QApplication::UnicodeUTF8));
        Regeneration_l->setText(QApplication::translate("MainWindowClass", "Regeneration:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Regeneration_v->setStatusTip(QApplication::translate("MainWindowClass", "Regenerate between 0-100% of the spawn's total life each cycle.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        RegenerationStatusPurge_v->setStatusTip(QApplication::translate("MainWindowClass", "Regeneration will also purge all effects on the spawn if they are not at maximum health.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        RegenerationStatusPurge_v->setText(QApplication::translate("MainWindowClass", "Remove all effects", 0, QApplication::UnicodeUTF8));
        twMain->setTabText(twMain->indexOf(tabSpecials), QApplication::translate("MainWindowClass", "Specials", 0, QApplication::UnicodeUTF8));
        gbCorpseDecay->setTitle(QApplication::translate("MainWindowClass", "Corpse Decay", 0, QApplication::UnicodeUTF8));
        CorpseDecayDuration_l->setText(QApplication::translate("MainWindowClass", "Duration:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CorpseDecayCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Use NESS corpse effects.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CorpseDecayCheck_v->setText(QApplication::translate("MainWindowClass", "Use corpse decay", 0, QApplication::UnicodeUTF8));
        CorpseDecayLoot_l->setText(QApplication::translate("MainWindowClass", "Lootable Items:", 0, QApplication::UnicodeUTF8));
        CorpseDecayLoot_v->clear();
        CorpseDecayLoot_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Inventory items only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Inventory items only, if the PC killed the creature", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Inventory items and equipped items", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Inventory items and equipped, if the PC killed the creature", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "None", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        CorpseDecayLoot_v->setStatusTip(QApplication::translate("MainWindowClass", "Items from the creature that drop on death.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CorpseDecayRemains_l->setText(QApplication::translate("MainWindowClass", "Remains:", 0, QApplication::UnicodeUTF8));
        CorpseDecayRemains_v->clear();
        CorpseDecayRemains_v->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Loot Bag", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Body", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Bones", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Potion", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Pouch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Scroll", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Treasure", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "None (destroy loot on decay)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_STATUSTIP
        CorpseDecayRemains_v->setStatusTip(QApplication::translate("MainWindowClass", "Graphic of the loot after the corpse fades.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        CorpseDecayDuration_v->setStatusTip(QApplication::translate("MainWindowClass", "Duration a corpse remains before turning into a loot bag.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CorpseDecayDuration_v->setSuffix(QApplication::translate("MainWindowClass", " seconds", 0, QApplication::UnicodeUTF8));
        gbGold->setTitle(QApplication::translate("MainWindowClass", "Gold", 0, QApplication::UnicodeUTF8));
        GoldLoot_l->setText(QApplication::translate("MainWindowClass", "Gold:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        GoldLootMin_v->setStatusTip(QApplication::translate("MainWindowClass", "Minimum gold to spawn with.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        GoldLootMin_v->setSuffix(QApplication::translate("MainWindowClass", "g minimum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        GoldLootMax_v->setStatusTip(QApplication::translate("MainWindowClass", "Maximum gold to spawn with.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        GoldLootMax_v->setSuffix(QApplication::translate("MainWindowClass", "g maximum", 0, QApplication::UnicodeUTF8));
        GoldLootChance_l->setText(QApplication::translate("MainWindowClass", "Chance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        GoldLootChance_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of the spawn having gold on its corpse.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        gbLoot->setTitle(QApplication::translate("MainWindowClass", "Loot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LootCheck_v->setStatusTip(QApplication::translate("MainWindowClass", "Use a loot table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LootCheck_v->setText(QApplication::translate("MainWindowClass", "Drops loot", 0, QApplication::UnicodeUTF8));
        LootStore_l->setText(QApplication::translate("MainWindowClass", "Loot Store:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LootStore_v->setStatusTip(QApplication::translate("MainWindowClass", "Loot table ID.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LootStore_v->setPrefix(QApplication::translate("MainWindowClass", "LOOT_", 0, QApplication::UnicodeUTF8));
        LootSpawn1_l->setText(QApplication::translate("MainWindowClass", "Single Chance:", 0, QApplication::UnicodeUTF8));
        LootSpawn2_l->setText(QApplication::translate("MainWindowClass", "Double Chance:", 0, QApplication::UnicodeUTF8));
        LootSpawn3_l->setText(QApplication::translate("MainWindowClass", "Triple Chance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LootSpawn1_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of 1 item spawning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        LootSpawn2_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of 2 items spawning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        LootSpawn3_v->setStatusTip(QApplication::translate("MainWindowClass", "Chance of 3 items spawning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        twMain->setTabText(twMain->indexOf(tabCorpse), QApplication::translate("MainWindowClass", "Corpse", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QApplication::translate("MainWindowClass", "NESS.Gen v1.0 by FoamBats4All", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
