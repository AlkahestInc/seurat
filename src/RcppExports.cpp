// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RunModularityClusteringCpp
IntegerVector RunModularityClusteringCpp(Eigen::SparseMatrix<double> SNN, int modularityFunction, double resolution, int algorithm, int nRandomStarts, int nIterations, int randomSeed, bool printOutput, std::string edgefilename);
RcppExport SEXP _AlkaSeurat_RunModularityClusteringCpp(SEXP SNNSEXP, SEXP modularityFunctionSEXP, SEXP resolutionSEXP, SEXP algorithmSEXP, SEXP nRandomStartsSEXP, SEXP nIterationsSEXP, SEXP randomSeedSEXP, SEXP printOutputSEXP, SEXP edgefilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type SNN(SNNSEXP);
    Rcpp::traits::input_parameter< int >::type modularityFunction(modularityFunctionSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< int >::type nRandomStarts(nRandomStartsSEXP);
    Rcpp::traits::input_parameter< int >::type nIterations(nIterationsSEXP);
    Rcpp::traits::input_parameter< int >::type randomSeed(randomSeedSEXP);
    Rcpp::traits::input_parameter< bool >::type printOutput(printOutputSEXP);
    Rcpp::traits::input_parameter< std::string >::type edgefilename(edgefilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(RunModularityClusteringCpp(SNN, modularityFunction, resolution, algorithm, nRandomStarts, nIterations, randomSeed, printOutput, edgefilename));
    return rcpp_result_gen;
END_RCPP
}
// RunUMISampling
Eigen::SparseMatrix<double> RunUMISampling(Eigen::SparseMatrix<double> data, int sample_val, bool upsample, bool display_progress);
RcppExport SEXP _AlkaSeurat_RunUMISampling(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(RunUMISampling(data, sample_val, upsample, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RunUMISamplingPerCell
Eigen::SparseMatrix<double> RunUMISamplingPerCell(Eigen::SparseMatrix<double> data, NumericVector sample_val, bool upsample, bool display_progress);
RcppExport SEXP _AlkaSeurat_RunUMISamplingPerCell(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(RunUMISamplingPerCell(data, sample_val, upsample, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RowMergeMatrices
Eigen::SparseMatrix<double> RowMergeMatrices(Eigen::SparseMatrix<double, Eigen::RowMajor> mat1, Eigen::SparseMatrix<double, Eigen::RowMajor> mat2, std::vector< std::string > mat1_rownames, std::vector< std::string > mat2_rownames, std::vector< std::string > all_rownames);
RcppExport SEXP _AlkaSeurat_RowMergeMatrices(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat1_rownamesSEXP, SEXP mat2_rownamesSEXP, SEXP all_rownamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat1_rownames(mat1_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat2_rownames(mat2_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type all_rownames(all_rownamesSEXP);
    rcpp_result_gen = Rcpp::wrap(RowMergeMatrices(mat1, mat2, mat1_rownames, mat2_rownames, all_rownames));
    return rcpp_result_gen;
END_RCPP
}
// LogNorm
Eigen::SparseMatrix<double> LogNorm(Eigen::SparseMatrix<double> data, int scale_factor, bool display_progress);
RcppExport SEXP _AlkaSeurat_LogNorm(SEXP dataSEXP, SEXP scale_factorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(LogNorm(data, scale_factor, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// Standardize
NumericMatrix Standardize(Eigen::Map<Eigen::MatrixXd> mat, bool display_progress);
RcppExport SEXP _AlkaSeurat_Standardize(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(Standardize(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastSparseRowScale
Eigen::MatrixXd FastSparseRowScale(Eigen::SparseMatrix<double> mat, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _AlkaSeurat_FastSparseRowScale(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastSparseRowScale(mat, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastSparseRowScaleWithKnownStats
Eigen::MatrixXd FastSparseRowScaleWithKnownStats(Eigen::SparseMatrix<double> mat, NumericVector mu, NumericVector sigma, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _AlkaSeurat_FastSparseRowScaleWithKnownStats(SEXP matSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastSparseRowScaleWithKnownStats(mat, mu, sigma, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastCov
Eigen::MatrixXd FastCov(Eigen::MatrixXd mat, bool center);
RcppExport SEXP _AlkaSeurat_FastCov(SEXP matSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCov(mat, center));
    return rcpp_result_gen;
END_RCPP
}
// FastCovMats
Eigen::MatrixXd FastCovMats(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2, bool center);
RcppExport SEXP _AlkaSeurat_FastCovMats(SEXP mat1SEXP, SEXP mat2SEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCovMats(mat1, mat2, center));
    return rcpp_result_gen;
END_RCPP
}
// FastRBind
Eigen::MatrixXd FastRBind(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2);
RcppExport SEXP _AlkaSeurat_FastRBind(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    rcpp_result_gen = Rcpp::wrap(FastRBind(mat1, mat2));
    return rcpp_result_gen;
END_RCPP
}
// FastExpMean
Eigen::VectorXd FastExpMean(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _AlkaSeurat_FastExpMean(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastExpMean(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVar2
NumericVector SparseRowVar2(Eigen::SparseMatrix<double> mat, NumericVector mu, bool display_progress);
RcppExport SEXP _AlkaSeurat_SparseRowVar2(SEXP matSEXP, SEXP muSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVar2(mat, mu, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVarStd
NumericVector SparseRowVarStd(Eigen::SparseMatrix<double> mat, NumericVector mu, NumericVector sd, double vmax, bool display_progress);
RcppExport SEXP _AlkaSeurat_SparseRowVarStd(SEXP matSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP vmaxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type vmax(vmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVarStd(mat, mu, sd, vmax, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastLogVMR
Eigen::VectorXd FastLogVMR(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _AlkaSeurat_FastLogVMR(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastLogVMR(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RowVar
NumericVector RowVar(Eigen::Map<Eigen::MatrixXd> x);
RcppExport SEXP _AlkaSeurat_RowVar(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RowVar(x));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVar
Eigen::VectorXd SparseRowVar(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _AlkaSeurat_SparseRowVar(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVar(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// ReplaceColsC
Eigen::SparseMatrix<double> ReplaceColsC(Eigen::SparseMatrix<double> mat, NumericVector col_idx, Eigen::SparseMatrix<double> replacement);
RcppExport SEXP _AlkaSeurat_ReplaceColsC(SEXP matSEXP, SEXP col_idxSEXP, SEXP replacementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type replacement(replacementSEXP);
    rcpp_result_gen = Rcpp::wrap(ReplaceColsC(mat, col_idx, replacement));
    return rcpp_result_gen;
END_RCPP
}
// GraphToNeighborHelper
List GraphToNeighborHelper(Eigen::SparseMatrix<double> mat);
RcppExport SEXP _AlkaSeurat_GraphToNeighborHelper(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(GraphToNeighborHelper(mat));
    return rcpp_result_gen;
END_RCPP
}
// fast_dist
List fast_dist(NumericMatrix x, NumericMatrix y, List n);
RcppExport SEXP _AlkaSeurat_fast_dist(SEXP xSEXP, SEXP ySEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_dist(x, y, n));
    return rcpp_result_gen;
END_RCPP
}
// FindWeightsC
Eigen::SparseMatrix<double> FindWeightsC(NumericVector cells2, Eigen::MatrixXd distances, std::vector<std::string> anchor_cells2, std::vector<std::string> integration_matrix_rownames, Eigen::MatrixXd cell_index, Eigen::VectorXd anchor_score, double min_dist, double sd, bool display_progress);
RcppExport SEXP _AlkaSeurat_FindWeightsC(SEXP cells2SEXP, SEXP distancesSEXP, SEXP anchor_cells2SEXP, SEXP integration_matrix_rownamesSEXP, SEXP cell_indexSEXP, SEXP anchor_scoreSEXP, SEXP min_distSEXP, SEXP sdSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cells2(cells2SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type anchor_cells2(anchor_cells2SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type integration_matrix_rownames(integration_matrix_rownamesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type cell_index(cell_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type anchor_score(anchor_scoreSEXP);
    Rcpp::traits::input_parameter< double >::type min_dist(min_distSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FindWeightsC(cells2, distances, anchor_cells2, integration_matrix_rownames, cell_index, anchor_score, min_dist, sd, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// IntegrateDataC
Eigen::SparseMatrix<double> IntegrateDataC(Eigen::SparseMatrix<double> integration_matrix, Eigen::SparseMatrix<double> weights, Eigen::SparseMatrix<double> expression_cells2);
RcppExport SEXP _AlkaSeurat_IntegrateDataC(SEXP integration_matrixSEXP, SEXP weightsSEXP, SEXP expression_cells2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type integration_matrix(integration_matrixSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type expression_cells2(expression_cells2SEXP);
    rcpp_result_gen = Rcpp::wrap(IntegrateDataC(integration_matrix, weights, expression_cells2));
    return rcpp_result_gen;
END_RCPP
}
// ScoreHelper
std::vector<double> ScoreHelper(Eigen::SparseMatrix<double> snn, Eigen::MatrixXd query_pca, Eigen::MatrixXd query_dists, Eigen::MatrixXd corrected_nns, int k_snn, bool subtract_first_nn, bool display_progress);
RcppExport SEXP _AlkaSeurat_ScoreHelper(SEXP snnSEXP, SEXP query_pcaSEXP, SEXP query_distsSEXP, SEXP corrected_nnsSEXP, SEXP k_snnSEXP, SEXP subtract_first_nnSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type query_pca(query_pcaSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type query_dists(query_distsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type corrected_nns(corrected_nnsSEXP);
    Rcpp::traits::input_parameter< int >::type k_snn(k_snnSEXP);
    Rcpp::traits::input_parameter< bool >::type subtract_first_nn(subtract_first_nnSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(ScoreHelper(snn, query_pca, query_dists, corrected_nns, k_snn, subtract_first_nn, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// ComputeSNN
Eigen::SparseMatrix<double> ComputeSNN(Eigen::MatrixXd nn_ranked, double prune);
RcppExport SEXP _AlkaSeurat_ComputeSNN(SEXP nn_rankedSEXP, SEXP pruneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeSNN(nn_ranked, prune));
    return rcpp_result_gen;
END_RCPP
}
// WriteEdgeFile
void WriteEdgeFile(Eigen::SparseMatrix<double> snn, String filename, bool display_progress);
RcppExport SEXP _AlkaSeurat_WriteEdgeFile(SEXP snnSEXP, SEXP filenameSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    WriteEdgeFile(snn, filename, display_progress);
    return R_NilValue;
END_RCPP
}
// DirectSNNToFile
Eigen::SparseMatrix<double> DirectSNNToFile(Eigen::MatrixXd nn_ranked, double prune, bool display_progress, String filename);
RcppExport SEXP _AlkaSeurat_DirectSNNToFile(SEXP nn_rankedSEXP, SEXP pruneSEXP, SEXP display_progressSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(DirectSNNToFile(nn_ranked, prune, display_progress, filename));
    return rcpp_result_gen;
END_RCPP
}
// SNN_SmallestNonzero_Dist
std::vector<double> SNN_SmallestNonzero_Dist(Eigen::SparseMatrix<double> snn, Eigen::MatrixXd mat, int n, std::vector<double> nearest_dist);
RcppExport SEXP _AlkaSeurat_SNN_SmallestNonzero_Dist(SEXP snnSEXP, SEXP matSEXP, SEXP nSEXP, SEXP nearest_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type nearest_dist(nearest_distSEXP);
    rcpp_result_gen = Rcpp::wrap(SNN_SmallestNonzero_Dist(snn, mat, n, nearest_dist));
    return rcpp_result_gen;
END_RCPP
}
// row_sum_dgcmatrix
NumericVector row_sum_dgcmatrix(NumericVector& x, IntegerVector& i, int rows, int cols);
RcppExport SEXP _AlkaSeurat_row_sum_dgcmatrix(SEXP xSEXP, SEXP iSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(row_sum_dgcmatrix(x, i, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// row_mean_dgcmatrix
NumericVector row_mean_dgcmatrix(NumericVector& x, IntegerVector& i, int rows, int cols);
RcppExport SEXP _AlkaSeurat_row_mean_dgcmatrix(SEXP xSEXP, SEXP iSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(row_mean_dgcmatrix(x, i, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// row_var_dgcmatrix
NumericVector row_var_dgcmatrix(NumericVector& x, IntegerVector& i, int rows, int cols);
RcppExport SEXP _AlkaSeurat_row_var_dgcmatrix(SEXP xSEXP, SEXP iSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(row_var_dgcmatrix(x, i, rows, cols));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP isnull(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_AlkaSeurat_RunModularityClusteringCpp", (DL_FUNC) &_AlkaSeurat_RunModularityClusteringCpp, 9},
    {"_AlkaSeurat_RunUMISampling", (DL_FUNC) &_AlkaSeurat_RunUMISampling, 4},
    {"_AlkaSeurat_RunUMISamplingPerCell", (DL_FUNC) &_AlkaSeurat_RunUMISamplingPerCell, 4},
    {"_AlkaSeurat_RowMergeMatrices", (DL_FUNC) &_AlkaSeurat_RowMergeMatrices, 5},
    {"_AlkaSeurat_LogNorm", (DL_FUNC) &_AlkaSeurat_LogNorm, 3},
    {"_AlkaSeurat_Standardize", (DL_FUNC) &_AlkaSeurat_Standardize, 2},
    {"_AlkaSeurat_FastSparseRowScale", (DL_FUNC) &_AlkaSeurat_FastSparseRowScale, 5},
    {"_AlkaSeurat_FastSparseRowScaleWithKnownStats", (DL_FUNC) &_AlkaSeurat_FastSparseRowScaleWithKnownStats, 7},
    {"_AlkaSeurat_FastCov", (DL_FUNC) &_AlkaSeurat_FastCov, 2},
    {"_AlkaSeurat_FastCovMats", (DL_FUNC) &_AlkaSeurat_FastCovMats, 3},
    {"_AlkaSeurat_FastRBind", (DL_FUNC) &_AlkaSeurat_FastRBind, 2},
    {"_AlkaSeurat_FastExpMean", (DL_FUNC) &_AlkaSeurat_FastExpMean, 2},
    {"_AlkaSeurat_SparseRowVar2", (DL_FUNC) &_AlkaSeurat_SparseRowVar2, 3},
    {"_AlkaSeurat_SparseRowVarStd", (DL_FUNC) &_AlkaSeurat_SparseRowVarStd, 5},
    {"_AlkaSeurat_FastLogVMR", (DL_FUNC) &_AlkaSeurat_FastLogVMR, 2},
    {"_AlkaSeurat_RowVar", (DL_FUNC) &_AlkaSeurat_RowVar, 1},
    {"_AlkaSeurat_SparseRowVar", (DL_FUNC) &_AlkaSeurat_SparseRowVar, 2},
    {"_AlkaSeurat_ReplaceColsC", (DL_FUNC) &_AlkaSeurat_ReplaceColsC, 3},
    {"_AlkaSeurat_GraphToNeighborHelper", (DL_FUNC) &_AlkaSeurat_GraphToNeighborHelper, 1},
    {"_AlkaSeurat_fast_dist", (DL_FUNC) &_AlkaSeurat_fast_dist, 3},
    {"_AlkaSeurat_FindWeightsC", (DL_FUNC) &_AlkaSeurat_FindWeightsC, 9},
    {"_AlkaSeurat_IntegrateDataC", (DL_FUNC) &_AlkaSeurat_IntegrateDataC, 3},
    {"_AlkaSeurat_ScoreHelper", (DL_FUNC) &_AlkaSeurat_ScoreHelper, 7},
    {"_AlkaSeurat_ComputeSNN", (DL_FUNC) &_AlkaSeurat_ComputeSNN, 2},
    {"_AlkaSeurat_WriteEdgeFile", (DL_FUNC) &_AlkaSeurat_WriteEdgeFile, 3},
    {"_AlkaSeurat_DirectSNNToFile", (DL_FUNC) &_AlkaSeurat_DirectSNNToFile, 4},
    {"_AlkaSeurat_SNN_SmallestNonzero_Dist", (DL_FUNC) &_AlkaSeurat_SNN_SmallestNonzero_Dist, 4},
    {"_AlkaSeurat_row_sum_dgcmatrix", (DL_FUNC) &_AlkaSeurat_row_sum_dgcmatrix, 4},
    {"_AlkaSeurat_row_mean_dgcmatrix", (DL_FUNC) &_AlkaSeurat_row_mean_dgcmatrix, 4},
    {"_AlkaSeurat_row_var_dgcmatrix", (DL_FUNC) &_AlkaSeurat_row_var_dgcmatrix, 4},
    {"isnull", (DL_FUNC) &isnull, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_AlkaSeurat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
