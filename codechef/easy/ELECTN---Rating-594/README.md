# ELECTN - Rating 594

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T02:37:40.975Z  

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
        if(a<=(b*1+c*2)){
            cout<<"Qualify\n";
        }
        else{
            cout<<"NotQualify\n";
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ELECTN)