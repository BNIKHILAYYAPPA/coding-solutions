# OFFICE - Rating 519

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-02T16:13:15.480Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    int i=0;
    while(i<x){
        int a,b,c;
        cin>>a>>b>>c;
        double per = (double)c / (a*b) * 100;
        if(per>50){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        i++;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OFFICE)