type t;

let rubLamp: unit => t;
let wish: (string, t) => t;
let getNumRemainingWishes: t => int;
let getLastGrantedWish: t => string;
