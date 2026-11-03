# TRUESCORE - Rating 571

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T14:21:20.963Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"BIKE\n";
        }
        else if(a>b){
            cout<<"CAR\n";
        }
        else{
            cout<<"SAME\n";
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TRUESCORE)