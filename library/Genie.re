type t = {
    remainingWishes: int,
    lastGrantedWish: string,
  }

  let rubLamp = () => {
    remainingWishes: 3,
    lastGrantedWish: ""
  };

  let grantWish = wish => wish;

  let wish = (wish, genie) => {
    switch(wish, genie) {
      | (_, g) when g.remainingWishes < 1 => g
      | ("more wishes!", g) => g
      | (w, g) => {
        remainingWishes: g.remainingWishes - 1,
        lastGrantedWish: grantWish(w)
      }
    };
  }

  let getNumRemainingWishes = g => g.remainingWishes;

  let getLastGrantedWish = g => g.lastGrantedWish;
