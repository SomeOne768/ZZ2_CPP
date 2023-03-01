#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>
#include <sstream>
#include <queue>
#include <map>

class ZZ
{
  std::string nom, prenom;
  double note;

public:
  // l'operator<() pour comparer des éléments (ordre);
  bool operator<(const ZZ z) const
  {
    return note > z.note;
  }

  const std::string getName() const
  {
    return nom;
  }

  const std::string getFirstname() const
  {
    return prenom;
  }

  // l'operator<<() pour afficher un élément sur le flux donné
  // std::ostream &operator<<(const ZZ &z)
  // {
  //   std::ostream oss;
  //   oss << "nom: " << z.nom << " prenom: " << z.prenom << " ";
  //   return oss;
  // }
};

std::ostream &operator<<(std::ostream &oss, const ZZ &z)
{
  oss << "prenom" << z.getName() << z.getFirstname() << "\n";
  return oss;
}

int main(int, char **)
{

  /******* PARTIE 1 ********/
  // std::vector<int> v;
  // int input;

  // while (std::cin >> input)
  //   v.push_back(input);

  // std::sort(v.begin(), v.end());

  // std::copy(v.begin(), v.end(),
  //           std::ostream_iterator<int>(std::cout, "\n"));

  // // Version affichage
  // for (auto it = v.begin(); it != v.end(); it++)
  // {
  //   std::cout << *it << "\n";
  // }

  // for (int &e : v)
  // {
  //   std::cout << e << "\n";
  // }

  /******* PARTIE 2 ********/
  // std::stack<int> is;
  // std::stack<double, std::vector<double>> ds;

  // for (int i = 0; i < 10; ++i)
  //   is.push(i);

  // while (!is.empty())
  // {
  //   std::cout << is.top() << std::endl;
  //   ds.push((double)is.top() * is.top());
  //   is.pop();
  // }

  /******* PARTIE 3 ********/
  // std::priority_queue<int> q1; // Max priority queue
  // q1

  // using vzz = std::vector<ZZ>;
  // vzz zz;

  // // il faut mettre des elements
  // for (auto i = 0; i < 10; i++)
  //   zz.push_back(ZZ());

  // std::priority_queue<ZZ> tri;

  // for (vzz::iterator it = zz.begin();
  //      it != zz.end(); ++it)
  //   tri.push(*it);

  // while (!tri.empty())
  // {
  //   std::cout << tri.top() << "\n";
  //   tri.pop();
  // }

  /******* PARTIE 4 ********/
  // using vpzz = std::vector<ZZ*>;

  // vpzz partie_1_4;
  // for(auto i = 0; i<10; i++)
  // {
  //   partie_1_4.push_back( new ZZ());
  // }

  // for(auto &e : partie_1_4)
  // {
  //   delete e;
  // }

  // partie_1_4.clear();

  /******* PARTIE 5 ********/
  // 1.5. Tableau associatif
  using mss = std::map<std::string, std::string> ;
  mss m;
  m.insert(pair<std::string, std::string>("loic", "405042"));
  m.insert(make_pair("pierre", "405033"));
  m.insert(make_pair("SOS C++ 24/7", "407662"));
  m["secours"] = "42";

  // mss::iterator it = m.find("loic");
  // if (it == m.end())
  //   std::cout << "et moi ?";

  // const std::string &first(const pair<string, string> &p) { return p.first; }

  // map<string, string> liste;

  // map<string, string>::const_iterator it = liste.begin();
  // while (it != liste.end())
  // {
  //   cout << it->first << " "
  //        << it->second << endl;
  //   ++it;
  // }

  // transform(liste.begin(), liste.end(),
  //           ostream_iterator<string>(cout, " "), first);

  return 0;
}
