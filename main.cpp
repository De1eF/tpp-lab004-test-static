#include "MatrixAnalysis.h"
#include <iostream>
int main(){double a[]={4,7,2,6},d=0,inv[4]{};int rc=matrix_determinant(a,2,&d);if(rc)return rc;rc=matrix_inverse(a,2,inv);if(rc)return rc;std::cout<<"Stud-1 determinant="<<d<<", inverse[0,0]="<<inv[0]<<'\n';return 0;}
