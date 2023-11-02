\name{deleteAnomaly}
\alias{deleteAnomaly}
\title{deleteAnomaly}
\usage{
deleteAnomaly(tree,score,OTUrankData=NULL,drop=FALSE)
}
\description{
Delete tip(s) with the highest score from a tree. Return a list of two elements. The first one is a vector of deleted tip label(s). The second is a tree without the deleted tip(s).
}
\arguments{
\item{tree}{A phylogenetic tree to be checked. This is loaded by ape::read.tree() from a file.}
\item{score}{Score calculated by calc.Score function.}
\item{OTUrankData}{A list composed of two character vectors. The first vector is tips of tree. The second vector is the upper rank of the tips. When this is NULL, the function assumes that all the tree tips are expressed as Genus_species like Homo_sapience and that the score is calculated based on genera. When this is not NULL, the function assumes the score is calculated based on the upper rank in this list.}
\item{drop}{Whether the dropped OTU(s) is included in the returned tree.}
}
\examples{
data(testTree)
data(testRankList)
#calculate scores for the rank in the list
score<-calc.Score(testTree,testRankList)
#delete tip with the highest score from tree
deleteAnomaly(testTree,score,testRankList)
}