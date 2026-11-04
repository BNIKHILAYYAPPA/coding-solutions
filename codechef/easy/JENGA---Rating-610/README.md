# JENGA - Rating 610

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T10:17:49.386Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int n;
     cin>>n;
     while(n--){
         int a,b,c;
         cin>>a>>b>>c;
         if(c%b==0&&a*b>=c){
             cout<<"YES\n";
         }
         else{
             cout<<"NO\n";
         }
     }
     return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JENGA)