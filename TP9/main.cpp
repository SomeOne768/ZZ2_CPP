#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
// Uca.pereda.fr/cpp
class ZZ
{
    std::string nom, prenom;
    double note;

public:
    ZZ(std::string nom, std::string prenom): nom(nom), prenom(prenom) {}
    // l'operator<() pour comparer des éléments (ordre);
    // bool operator<(const ZZ z) const
    // {
    //     return note > z.note;
    // }
    bool operator<(const ZZ z) const
    {
        int out =  strcmp(nom.c_str(), z.nom.c_str());
        if(out == 0)
            out = strcmp(prenom.c_str(), z.prenom.c_str());
        return out > 0;
    }

    const std::string getName() const
    {
        return nom;
    }

    const std::string getFirstname() const
    {
        return prenom;
    }
};

std::ostream &operator<<(std::ostream &oss,const ZZ &z)
{
    oss << z.getFirstname() << " " << z.getName() ;
    return oss;   
}

int main()
{
    using vzz = std::vector<ZZ> ;

    vzz zz;

   zz.push_back(ZZ( "zoghlami", "jalil" ));
   zz.push_back(ZZ( "zoghlami", "abdeljalil" ));
//    zz.push_back(ZZ( "0zoghlami", "jalil" ));
//    zz.push_back(ZZ( "zoghlami", "9jalil" ));
//    zz.push_back(ZZ( "zoghlami", "4jalil" ));

    std::priority_queue<ZZ> tri;

    for (vzz::iterator it = zz.begin();
         it != zz.end(); ++it)
        tri.push(*it);

    while (!tri.empty())
    {
        std::cout << tri.top() << " ";
        tri.pop();
    }

    return 0;
}