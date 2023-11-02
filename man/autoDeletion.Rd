\name{autoDeletion}
\alias{autoDeletion}
\title{autoDeletion}
\usage{
autoDeletion(tree,OTUrankData=NULL,show_progress=T,num_threads=1)
}
\description{
Iterate calc.Score() and DeleteAnomaly() until all the tree tips have 0 score or the number of the tips becomes three or lower. The returned result is a list of three elements. The first one is a tree without erroneous taxa. The second is a vector of deleted tip labels. The third is a list of the scores during the iteration.
}
\arguments{
\item{tree}{A phylogenetic tree to be checked. This is loaded by ape::read.tree() from a file.}
\item{OTUrankData}{A list composed of two character vectors. The first vector is tips of tree. The second vector is the upper rank of the tips. When this is NULL, the function assumes that all the tree tips are expressed as Genus_species like Homo_sapience, and calculates for genera. When this is not NULL, the function calculates based on the upper rank in this list.}
\item{show_progress}{If TRUE, calculation progress is shown on the R console.}
\item{num_threads}{A positive integer to specify the number of threads to calculate.}
}
\examples{
data(testTree)
data(testRankList)
#calculate scores for the rank in the list, and delete all the erroneous tips
#this takes tens of seconds for calculation
result<-autoDeletion(testTree,testRankList)
#tree without erroneos tips
result[[1]]
#deleted tips
result[[2]]
#scores during iteration of score calculation and tip deletion
result[[3]]
}
