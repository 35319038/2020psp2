#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double p_stdnorm(double z);


int main(void)
{
    double val;
    char fname[FILENAME_MAX];
    char buf[256];
    FILE* fp;
    double L1=1,L2=1;
    double dateA,dateB,proA,proB;
    double mua=170.8;
    double mub=169.7;
    double sigmaa=5.43;
    double sigmab=5.5;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);

    dateA=0;
    dateB=0;

    dateA=(val-mua)/sigmaa;
    dateB=(val-mub)/sigmab;

    proA=p_stdnorm(dateA);
    proB=p_stdnorm(dateB);

    L1=L1*proA;
    L2=L2*proB;
    
        
    }

    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("L_A: %f\n",L1);
    printf("L_B: %f\n",L2);

    return 0;


}

double p_stdnorm(double z){

  return 1 * exp(-z*z/2) / sqrt(2*M_PI);

  
}