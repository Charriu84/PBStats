#include "CvGameCoreDLL.h"
#include "CyGameTextMgr.h"

//
// published python interface for CyGameTextMgr
//

void CyGameTextMgrInterface()
{
	OutputDebugString("Python Extension Module - CyTextMgr\n");

	python::class_<CyGameTextMgr>("CyGameTextMgr")
		.def("isNone", &CyGameTextMgr::isNone, "bool () - Checks to see if pointer points to a real object")

		.def("Reset", &CyGameTextMgr::Reset, "void ()")
		.def("getTimeStr", &CyGameTextMgr::getTimeStr, "wstring getTimeStr(int iGameTurn, bool bSave)
		.def("getDateStr", &CyGameTextMgr::getDateStr, "wstring getDateStr(int iGameTurn, bool bSave, int (CalendarTypes) eCalendar, int iStartYear, int (GameSpeedTypes) eSpeed)
		.def("getInterfaceTimeStr", &CyGameTextMgr::getInterfaceTimeStr, "wstring getInterfaceTimeStr(int (PlayerTypes) iPlayer)
		.def("getGoldStr", &CyGameTextMgr::getGoldStr, "wstring getGoldStr(int (PlayerTypes) iPlayer)
		.def("getResearchStr", &CyGameTextMgr::getResearchStr, "wstring getResearchStr(int (PlayerTypes) iPlayer)
		.def("getOOSSeeds", &CyGameTextMgr::getOOSSeeds, "wstring getOOSSeeds(int (PlayerTypes) iPlayer)
		.def("getNetStats", &CyGameTextMgr::getNetStats, "wstring getNetStats(int (PlayerTypes) iPlayer)
		.def("getTechHelp", &CyGameTextMgr::getTechHelp, "wstring getTechHelp(int iTech, bool bCivilopediaText, bool bPlayerContext, bool bStrategyText, bool bTreeInfo, int iFromTech)
		.def("getUnitHelp", &CyGameTextMgr::getUnitHelp, "wstring getUnitHelp(int iUnit, bool bCivilopediaText, bool bStrategyText, bool bTechChooserText, CyCity* pCity)
		.def("getSpecificUnitHelp", &CyGameTextMgr::getSpecificUnitHelp, "wstring getSpecificUnitHelp(CyUnit* pUnit, bool bOneLine, bool bShort)
		.def("getBuildingHelp", &CyGameTextMgr::getBuildingHelp, "wstring getBuildingHelp(int iBuilding, bool bCivilopediaText, bool bStrategyText, bool bTechChooserText, CyCity* pCity)
		.def("getProjectHelp", &CyGameTextMgr::getProjectHelp, "wstring getProjectHelp(int iProject, bool bCivilopediaText, CyCity* pCity)
		.def("getPromotionHelp", &CyGameTextMgr::getPromotionHelp, "wstring getPromotionHelp(int iPromotion, bool bCivilopediaText)
		.def("getBonusHelp", &CyGameTextMgr::getBonusHelp, "wstring getBonusHelp(int iBonus, bool bCivilopediaText)
		.def("getReligionHelpCity", &CyGameTextMgr::getReligionHelpCity, "wstring getReligionHelpCity(int iReligion, CyCity* pCity, bool bCityScreen, bool bForceReligion, bool bForceState, bool bNoStateReligion)
		.def("getCorporationHelpCity", &CyGameTextMgr::getCorporationHelpCity, "wstring getCorporationHelpCity(int iCorporation, CyCity* pCity, bool bCityScreen, bool bForceCorporation)
		.def("getImprovementHelp", &CyGameTextMgr::getImprovementHelp, "wstring getImprovementHelp(int iImprovement, bool bCivilopediaText)
		.def("getTerrainHelp", &CyGameTextMgr::getTerrainHelp, "wstring getTerrainHelp(int iTerrain, bool bCivilopediaText)
		.def("getFeatureHelp", &CyGameTextMgr::getFeatureHelp, "wstring getFeatureHelp(int iFeature, bool bCivilopediaText)
		.def("parseCivicInfo", &CyGameTextMgr::parseCivicInfo, "wstring parseCivicInfo(int (CivicTypes) iCivicType, bool bCivilopediaText, bool bPlayerContext, bool bSkipName)
		.def("parseReligionInfo", &CyGameTextMgr::parseReligionInfo, "wstring parseReligionInfo(int (ReligionTypes) iReligionType, bool bCivilopediaText)
		.def("parseCorporationInfo", &CyGameTextMgr::parseCorporationInfo, "wstring parseCorporationInfo(int (CorporationTypes) iCorporationType, bool bCivilopediaText)
		.def("parseCivInfos", &CyGameTextMgr::parseCivInfos, "wstring parseCivInfos(int (CivilizationTypes) iCivilization, bool bDawnOfMan)
		.def("parseLeaderTraits", &CyGameTextMgr::parseLeaderTraits, "wstring parseLeaderTraits(int (LeaderHeadTypes) iLeader, int (CivilizationTypes) iCivilization, bool bDawnOfMan, bool bCivilopediaText)
		.def("getSpecialistHelp", &CyGameTextMgr::getSpecialistHelp, "wstring getSpecialistHelp(int iSpecialist, bool bCivilopediaText)
		.def("getTradeString", &CyGameTextMgr::getTradeString, "wstring getTradeString(TradeData* pTradeData, int iPlayer1, int iPlayer2)
		.def("buildHintsList", &CyGameTextMgr::buildHintsList, "wstring buildHintsList()
		.def("getAttitudeString", &CyGameTextMgr::getAttitudeString, "wstring getAttitudeString(int iPlayer, int iTargetPlayer)
		.def("setConvertHelp", &CyGameTextMgr::setConvertHelp, "wstring setConvertHelp(int iPlayer, int iReligion)
		.def("setRevolutionHelp", &CyGameTextMgr::setRevolutionHelp, "wstring setRevolutionHelp(int iPlayer)
		.def("setVassalRevoltHelp", &CyGameTextMgr::setVassalRevoltHelp, "wstring setVassalRevoltHelp(int iMaster, int iVassal)
		.def("getActiveDealsString", &CyGameTextMgr::getActiveDealsString, "wstring getActiveDealsString(int iThisPlayer, int iOtherPlayer)
		.def("getDealString", &CyGameTextMgr::getDealString, "wstring getDealString(CyDeal* pDeal, int iPlayerPerspective)
	;
}