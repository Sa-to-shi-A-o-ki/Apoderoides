\name{calc.Score}
\alias{calc.Score}
\title{calc.Score}
\usage{
calc.Score(tree,OTUrankData=NULL,
allRankNames=NULL,allCentroids=NULL,dropIndex=NULL,
sort=TRUE,show_progress=TRUE,num_threads=1)
}
\description{
Calculate scores of a phylogenetic tree to find and prioritize erroneous taxa to delete.
}
\arguments{
\item{tree}{A phylogenetic tree to be checked. This is loaded by ape::read.tree() from a file.}
\item{OTUrankData}{A list composed of two character vectors. The first vector is tips of tree. The second vector is the upper rank of the tips. When this is NULL, the function assumes that all the tree tips are expressed as Genus_species like Homo_sapience, and calculate the score for genera. When this is not NULL, the function returns scores based on the upper rank in this list.}
\item{allRankNames}{This can be omitted.
This is a unique character vector of the upper ranks of the tree tips. If given, the caluclation will be a little faster.}
\item{allCentroids}{This can be omitted.
This is a list of numeric vectors of the centroids of ranks. If given, the caluclation will be a little faster.}
\item{dropIndex}{This can be omitted.
A numeric vector of indices of tree tips. The tree tips indicated by this dropIndex will be removed from the score calculation.}
\item{sort}{If TRUE, the calculation result is sorted by descending order of the total score.}
\item{show_progress}{If TRUE, calculation progress is shown on the R console.}
\item{num_threads}{A positive integer to specify the number of threads to calculate the scores.}
}
\examples{
data(testTree)
#calculate scores for genus
calc.Score(testTree)
data(testRankList)
#calculate scores for the rank in the list
calc.Score(testTree,testRankList)
}
