//MOHAMAD NAZHAN BIN MOHAMAD SHABERI
//MECHANICAL
//141935
//EMT 101 - Homework 2

#include <iostream>
#include<stdio.h>  
#include <cmath>
#define pi 3.14
using namespace std; 
   
float func(float x) 
{ 
    return 6-(x+x); 
} 
 
float funcx(float x)
{ 
	return x*(6-(x+x));
}

float funcy(float x)
{
	return ((6-(x+x))/2)*(6-(x+x));
}


double simpsons_(float ll, float ul, float n) 
{ 
    
    float h = (ul - ll) / n; 
  
     
    float x[200], fx[200]; 
  
     
    for (int i = 0; i <= n; i=i+1) 
	{ 
        x[i] = ll + i * h; 
        fx[i] = func(x[i]); 
    } 
  
    
    float res = 0; 
    for (int i = 0; i <= n; i++) 
	{ 
        if (i == 0 || i == n) 
            res += fx[i]; 
        else if (i % 2 != 0) 
            res += 4 * fx[i]; 
        else
            res += 2 * fx[i]; 
    } 
    res = res * (h / 3); 
    return res; 
} 


double simpsonsx_(float ll, float ul, float n) 
{ 
    
    float h = (ul - ll) / n; 
  
     
    float x[200], fx[200]; 
  
     
    for (int i = 0; i <= n; i=i+1) 
	{ 
        x[i] = ll + i * h; 
        fx[i] = funcx(x[i]); 
    } 
  
    
    float res = 0; 
    for (int i = 0; i <= n; i++) 
	{ 
        if (i == 0 || i == n) 
            res += fx[i]; 
        else if (i % 2 != 0) 
            res += 4 * fx[i]; 
        else
            res += 2 * fx[i]; 
    } 
    res = res * (h / 3); 
    return res; 
} 


double simpsonsy_(float ll, float ul, float n) 
{ 
    
    float h = (ul - ll) / n; 
  
     
    float x[200], fx[200]; 
  
     
    for (int i = 0; i <= n; i=i+1) 
	{ 
        x[i] = ll + i * h; 
        fx[i] = funcy(x[i]); 
    } 
  
    
    float res = 0; 
    for (int i = 0; i <= n; i++) 
	{ 
        if (i == 0 || i == n) 
            res += fx[i]; 
        else if (i % 2 != 0) 
            res += 4 * fx[i]; 
        else
            res += 2 * fx[i]; 
    } 
    res = res * (h / 3); 
    return res; 
} 


int main() 
{ 	double lower_limit,upper_limit,p_diff,sx,sy,tx,ty;  
    float n;  
	
	cout<<"lower limit: \n";
    cin>>lower_limit;
    
    cout<<"upper limit: \n";
    cin>>upper_limit;
    
    cout<<"number of interval: \n";
    cin>>n;
    cout<<endl<<endl;
    
  	sx = (simpsonsx_(lower_limit, upper_limit, n)/simpsons_(lower_limit, upper_limit, n));
  	sy = (simpsonsy_(lower_limit, upper_limit, n)/simpsons_(lower_limit, upper_limit, n));
  	

cout<<"by using simpson's rule"<<endl;
	cout<<"x: "<<sx<<endl;
	cout<<"y: "<<sy<<endl<<endl;
    

    return 0; 
} 
  
