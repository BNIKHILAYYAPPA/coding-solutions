# CREDCOINS - Rating 720

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T10:43:51.284Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int e=0,o=0;
    while(n--){
        int s;
        cin>>s;
        if(s%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    if(e>o){
        cout<<"READY FOR BATTLE";
    }
    else{
        cout<<"NOT READY";
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CREDCOINS)