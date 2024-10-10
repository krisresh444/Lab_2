#include <stdio.h>
#include <math.h>

int main(){
    double h;
    FILE *my_graph;
    printf("Enter h: ");
    scanf("%le",&h);
    my_graph = fopen("my_graph.txt","w");
        for (double x=0;x<=2;x+=h)
        {
        if (x<=1)
        {
            fprintf(my_graph,"%f\t%f\n",x,trunc(pow(x,2)*atan(x)));
            printf("%f\t%f\n",x,(pow(x,2)*atan(x)));
        }
        else
        {
            fprintf(my_graph,"%f\t%f\n",x,trunc(sin(1/pow(x,2))));
            printf("%f\t%f\n",x,sin(1/pow(x,2)));
        }
        }
    fclose(my_graph);
    return 0;
}