#include<stdio.h>
#include<math.h>
double Max(double a,double b,double c){
    double temp;
    if(a>b){
        temp=a;
    }
    else{
        temp=b;
    }
    if(temp>c){
        return temp;
    }
    else return c;
    
}
double Min(double a,double b,double c){
    double temp;
    if(a<b){
        temp=a;
    }
    else {
        temp=b;
    }
    if(temp<c){
        return temp;
    }
    else{
        return c;
    }
}
 
double rgbtoRGB(double a){
    return a/255;
}
 
int main(){
    double r,g,b,R,G,B;
    scanf("%lf%lf%lf",&r,&g,&b);
    R=rgbtoRGB(r);
    G=rgbtoRGB(g);
    B=rgbtoRGB(b);
    double h,s,v;
    v=Max(R,G,B);
    
    if(Max(R,G,B)!=0){
    s=(Max(R,G,B)-Min(R,G,B))/Max(R,G,B);
    }
    
    if(R==Max(R,G,B)&&Max(R,G,B)-Min(R,G,B)!=0){
        h=60*((G-B)/(Max(R,G,B)-Min(R,G,B)));
        
    }    
     if(G==Max(R,G,B)&&Max(R,G,B)-Min(R,G,B)!=0){
        h=60*(2+(B-R)/(Max(R,G,B)-Min(R,G,B)));
        
    }
     if(B==Max(R,G,B)&&Max(R,G,B)-Min(R,G,B)!=0){
        h=60*(4+(R-G)/(Max(R,G,B)-Min(R,G,B)));
        
    }
    
    if(h<0){
        h=h+360;
    }
    if(Max(R,G,B)-Min(R,G,B)==0){
    
        h=0;
        
    }
    if(Max(R,G,B)==0)
    {
        s=0;
    }
    s=s*100;
    v=v*100;
    printf("%.4lf,%.4lf%%,%.4lf%%",h,s,v);
}