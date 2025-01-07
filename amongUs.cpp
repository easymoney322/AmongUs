#include <cstdint> //uint_fast16_t
#include <iostream> //wcout
#include <string>
int main()
{
  const uint_fast16_t nice = 42069;
  auto funny = [](uint_fast16_t Saliva) -> std::string 
    {
      std::string FluidExchange = std::to_string(Saliva); 
      std::swap(FluidExchange[0], FluidExchange[3]); 
      return FluidExchange; 
    };
  const wchar_t gg[3]{ (wchar_t)(INT_FAST16_MAX - std::stoi(funny(nice))), L'\n', L'\0'};
  std::wprintf(L"%s", gg);
}