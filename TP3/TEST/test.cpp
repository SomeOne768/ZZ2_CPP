#define CATCH_CONFIG_MAIN
#include "./vcpkg/packages/catch2_x64-linux/include/catch.hpp"

TEST_CASE ("Vecteur1") {
  const int i = 0;
  REQUIRE ( i = 0 );
  CHECK( i>0 );
}
