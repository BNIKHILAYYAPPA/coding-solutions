# TRAVELFAST - Rating 570

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T14:15:54.962Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n--){
        double a,b;
        cin>>a>>b;
        if(a<b){
            cout<<0<<"\n";
        }
        else{
        cout<<ceil((a-b)/4)<<"\n";
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TRAVELFAST)