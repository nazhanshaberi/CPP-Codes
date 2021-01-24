//MOHAMAD NAZHAN BIN MOHAMAD SHABERI
//MECHANICAL
//141935
//EMT 101 - HOMEWORK 2

#include <iostream>  
#include <cmath>

using namespace std; 
   
float func(float x) 				//	dA
{ 
    return 6-(x+x); 
} 
 
float funcx(float x)				// x dA
{ 
	return x*(6-(x+x));
}

float funcy(float x)				// y/2 dA
{
	return ((6-(x+x))/2)*(6-(x+x));
}


//we will calculate using Trapezoidal's rule

//to find integration for 'dA'
double trapezoidal(float ll, float ul, float n) 		//meaning for every shortform can be refer at "int main ()"
{ 
    
    float h = (ul-ll)/n; 
  
    float s = func(ll)+func(ul); 
   
    for (int i = 1; i < n; i++) 
        s += 2*func(ll+i*h); 
  
    return (h/2)*s; 
} 

//to find integration of 'x dA'
double trapezoidalx(float ll, float ul, float n) 
{ 
    
    float h = (ul-ll)/n; 
  
    float s = funcx(ll)+funcx(ul); 
   
    for (int i = 1; i < n; i++) 
        s += 2*funcx(ll+i*h); 
  
    return (h/2)*s; 
} 

//to find integration of 'y/2 dA'
double trapezoidaly(float ll, float ul, float n) 
{ 
    
    float h = (ul-ll)/n; 
  
    float s = funcy(ll)+funcy(ul); 
   
    for (int i = 1; i < n; i++) 
        s += 2*funcy(ll+i*h); 
  
    return (h/2)*s; 
} 

int main() 
{ 	double lower_limit,upper_limit,tx,ty;  
    float n;  
	
	cout<<"lower limit: \n";
    cin>>lower_limit;
    
    cout<<"upper limit: \n";
    cin>>upper_limit;
    
    cout<<"number of interval: \n";
    cin>>n;
    cout<<endl<<endl;
  	
  	
  	tx = (trapezoidalx(lower_limit, upper_limit, n)/trapezoidal(lower_limit, upper_limit, n));				//let tx= X point = (x dA) / dA
  	ty = (trapezoidaly(lower_limit, upper_limit, n)/trapezoidal(lower_limit, upper_limit, n));				//let ty= Y point = (2/y dA) / dA
  	
  	

cout<<"by using trapezoidal's rule"<<endl;;
	cout<<"x: "<<tx<<endl;
	cout<<"y: "<<ty<<endl<<endl;    
	
    return 0; 
} 

//end of program
