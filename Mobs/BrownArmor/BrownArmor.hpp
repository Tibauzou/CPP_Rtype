#ifndef BROWNARMOR_HPP_
# define BROWNARMOR_HPP_

#include <SFML/System/Clock.hpp>
#include "Ressources.hpp"
#include "AObject.hpp"

class BrownArmor : public AObject
{
private:
  ISprite		*DesSprite;
  ISound		*explode;
  int			mode;
  sf::Clock		clock;
  sf::Clock		FireClock;
  int	       		FireRate;
  sf::Clock		DesClock;
  sf::Clock		MoveClock;
public:
  BrownArmor() = delete;
  BrownArmor(const int, const int, const int, const int, const ObjectType);
  BrownArmor(const BrownArmor &) = delete;
  BrownArmor		&operator=(const BrownArmor &) = delete;
  ~BrownArmor();

  void			setMode(int a);
  void			setModeDes(const int a);
  int			getMode() const;
  void			move_down();
  void			move_up();
  void			move_forward();
  void			move_backward();
  void			getDestroyed();
  void			resetAnim();
  void			draw(sf::RenderWindow &);
};

#endif /* !BROWNARMOR_HPP_ */
