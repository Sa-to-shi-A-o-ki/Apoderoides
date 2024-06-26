// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getTipNo_C
std::vector<int> getTipNo_C(std::vector<std::string> treeTip, std::vector<std::string> OTU);
RcppExport SEXP _Apoderoides_getTipNo_C(SEXP treeTipSEXP, SEXP OTUSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type OTU(OTUSEXP);
    rcpp_result_gen = Rcpp::wrap(getTipNo_C(treeTip, OTU));
    return rcpp_result_gen;
END_RCPP
}
// extractOTUbyRankName_C
std::vector<std::string> extractOTUbyRankName_C(std::string rankName, std::vector<std::string> treeTip, std::vector<std::string> rankList);
RcppExport SEXP _Apoderoides_extractOTUbyRankName_C(SEXP rankNameSEXP, SEXP treeTipSEXP, SEXP rankListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type rankName(rankNameSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rankList(rankListSEXP);
    rcpp_result_gen = Rcpp::wrap(extractOTUbyRankName_C(rankName, treeTip, rankList));
    return rcpp_result_gen;
END_RCPP
}
// getRankCentroid_C
std::vector<double> getRankCentroid_C(std::string rankName, std::vector<int> dropIndex, std::vector<std::string> treeTip, std::vector<int> treeMatCol0, std::vector<int> treeMatCol1, std::vector<std::string> rankList, bool show_progress, int num_threads);
RcppExport SEXP _Apoderoides_getRankCentroid_C(SEXP rankNameSEXP, SEXP dropIndexSEXP, SEXP treeTipSEXP, SEXP treeMatCol0SEXP, SEXP treeMatCol1SEXP, SEXP rankListSEXP, SEXP show_progressSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type rankName(rankNameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dropIndex(dropIndexSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol0(treeMatCol0SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol1(treeMatCol1SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rankList(rankListSEXP);
    Rcpp::traits::input_parameter< bool >::type show_progress(show_progressSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getRankCentroid_C(rankName, dropIndex, treeTip, treeMatCol0, treeMatCol1, rankList, show_progress, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// getAllCentroids_C
std::vector<std::vector<double>> getAllCentroids_C(std::vector<std::string> treeTip, std::vector<std::string> allRankNames, std::vector<int> treeMatCol0, std::vector<int> treeMatCol1, std::vector<std::string> rankList, bool show_progress, int num_threads);
RcppExport SEXP _Apoderoides_getAllCentroids_C(SEXP treeTipSEXP, SEXP allRankNamesSEXP, SEXP treeMatCol0SEXP, SEXP treeMatCol1SEXP, SEXP rankListSEXP, SEXP show_progressSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type allRankNames(allRankNamesSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol0(treeMatCol0SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol1(treeMatCol1SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rankList(rankListSEXP);
    Rcpp::traits::input_parameter< bool >::type show_progress(show_progressSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getAllCentroids_C(treeTip, allRankNames, treeMatCol0, treeMatCol1, rankList, show_progress, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// calcIntScore_C
int calcIntScore_C(std::vector<std::string> treeTip, std::vector<int> treeMatCol0, std::vector<int> treeMatCol1, std::string OTU, std::vector<std::vector<int>> allCentroids, std::vector<std::string> allRankNames, std::vector<std::string> rankList);
RcppExport SEXP _Apoderoides_calcIntScore_C(SEXP treeTipSEXP, SEXP treeMatCol0SEXP, SEXP treeMatCol1SEXP, SEXP OTUSEXP, SEXP allCentroidsSEXP, SEXP allRankNamesSEXP, SEXP rankListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol0(treeMatCol0SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol1(treeMatCol1SEXP);
    Rcpp::traits::input_parameter< std::string >::type OTU(OTUSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type allCentroids(allCentroidsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type allRankNames(allRankNamesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rankList(rankListSEXP);
    rcpp_result_gen = Rcpp::wrap(calcIntScore_C(treeTip, treeMatCol0, treeMatCol1, OTU, allCentroids, allRankNames, rankList));
    return rcpp_result_gen;
END_RCPP
}
// findSubTips_C
std::vector<int> findSubTips_C(std::vector<std::string> treeTip, std::vector<int> treeMatCol0, std::vector<int> treeMatCol1, int node);
RcppExport SEXP _Apoderoides_findSubTips_C(SEXP treeTipSEXP, SEXP treeMatCol0SEXP, SEXP treeMatCol1SEXP, SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol0(treeMatCol0SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol1(treeMatCol1SEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(findSubTips_C(treeTip, treeMatCol0, treeMatCol1, node));
    return rcpp_result_gen;
END_RCPP
}
// calcOutScore_C
int calcOutScore_C(std::vector<std::string> treeTip, std::vector<int> treeMatCol0, std::vector<int> treeMatCol1, std::string OTU, std::vector<std::vector<int>> allCentroids, std::vector<std::string> allRankNames, std::vector<std::string> rankList, std::vector<int> dropIndex);
RcppExport SEXP _Apoderoides_calcOutScore_C(SEXP treeTipSEXP, SEXP treeMatCol0SEXP, SEXP treeMatCol1SEXP, SEXP OTUSEXP, SEXP allCentroidsSEXP, SEXP allRankNamesSEXP, SEXP rankListSEXP, SEXP dropIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type treeTip(treeTipSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol0(treeMatCol0SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treeMatCol1(treeMatCol1SEXP);
    Rcpp::traits::input_parameter< std::string >::type OTU(OTUSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type allCentroids(allCentroidsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type allRankNames(allRankNamesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rankList(rankListSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dropIndex(dropIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(calcOutScore_C(treeTip, treeMatCol0, treeMatCol1, OTU, allCentroids, allRankNames, rankList, dropIndex));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Apoderoides_getTipNo_C", (DL_FUNC) &_Apoderoides_getTipNo_C, 2},
    {"_Apoderoides_extractOTUbyRankName_C", (DL_FUNC) &_Apoderoides_extractOTUbyRankName_C, 3},
    {"_Apoderoides_getRankCentroid_C", (DL_FUNC) &_Apoderoides_getRankCentroid_C, 8},
    {"_Apoderoides_getAllCentroids_C", (DL_FUNC) &_Apoderoides_getAllCentroids_C, 7},
    {"_Apoderoides_calcIntScore_C", (DL_FUNC) &_Apoderoides_calcIntScore_C, 7},
    {"_Apoderoides_findSubTips_C", (DL_FUNC) &_Apoderoides_findSubTips_C, 4},
    {"_Apoderoides_calcOutScore_C", (DL_FUNC) &_Apoderoides_calcOutScore_C, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_Apoderoides(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
