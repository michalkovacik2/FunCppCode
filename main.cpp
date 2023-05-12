%:include <iostream>
%:include <algorithm>

auto main() -> int <%
     bool p<:100:>;
     std::fill_n(p, 100, compl 0);
     0<:p:>= 1<:p:>= 0;
     <: bitand p:>() noexcept <%
     for (auto i = 1<<1; i * i < 100; ++i)
        if (i<:p:>)
           for (auto j = i * i; j < 100; j+=i)
                j <:p:>= 0;
     %>();
     std::cout << "primes:\n";
     for (auto i = 1<<1; i < 100; ++i)
          if (i<:p:>) std::cout << i << ' ';
     std::cout << std::endl;
%>
