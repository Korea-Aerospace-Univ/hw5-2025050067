#include <stdio.h>

int main()
{
    bool none=true;
    int cost, A=900,B=750,C=200,a=0,b=0,c=0;
    scanf("%d",&cost);
    for(int a=1;a*A<cost;a++){
        for(int b=2;b*B<cost;b+=2){
            
            for(int c=1;c*C<cost;c++){
                
                    
                        if(c<a||c<b){
                           
                            if(cost==a*A+b*B+c*C){
                                printf("%d %d %d\n",a,b,c);
                                none=false;
                            }
                        }
                        
                    
                
            }
        }
    }
    if(none) printf("none");
    
    return 0;
}
