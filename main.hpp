main hpp
#include<iostream>
using	namespace	std;
int	criteria=60;
void	decision(int	point[]){
　　int i;
　　for(i	=	0;i	<	3;i++){
　　　　if(point[i]	>=	criteria){
　　　　　　cout	<<	i+1	<<	"人目：合格"	<<	point[i]	<<	"点"	<<	endl;
　　　　}
　　　　else{
　　　　　　cout	<<	i+1	<<	"人目：不合格"	<<	point[i]	<<	"点"	<<	endl;
　　　　}
　　}
}
double	average(int	point[]){
　　int i,	sum=0;
　　for(i	=	0;i	<	3;i++){
　　　　sum	+=	point[i];
　　}
　　return(sum/3.0);
}

/*まず、最初にソースを二分割する際にcppとhppの二種類を作成し、それぞれに必要な事項を記載する*/
