#include <stdio.h>

int main()
{
    bool none=true;
    int cost, A=900,B=750,C=200,a=0,b=0,c=0;
    scanf("%d",&cost);
    for(int a=0;a*A<cost;++a){
        for(int b=0;b*B<cost;++b){
            
            for(int c=0;c*C<cost;++c){
                if(a!=0&&b!=0&&c!=0){
                    if(b%2==0){
                        if(c<a||c<b){
                            int temp=0;
                            temp=cost-(a*A+b*B+c*C);
                            if(temp==0){
                                printf("%d %d %d\n",a,b,c);
                                none=false;
                            }
                        }
                        
                    }
                }
            }
        }
    }
    if(none) printf("none");
    
    return 0;
}
