# mini-tor
proof-of-concept implementation of tor protocol using Microsoft CNG/CryptoAPI

### Libary

```C++
#include "tor.h"
//Usage: connect(url, hops, log_level, post, data)
connect("https://www.google.com/", 3, 0, false); //GET Request
connect("https://www.postb.in/xxxxx/", 3, 0, true, "parameter=value&also=another"); //POST Request
```
