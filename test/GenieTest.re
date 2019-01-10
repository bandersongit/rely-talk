open RelyTalk.Genie;
open TestFramework;

describe("Genie", ({test}) => {
  test("A new genie should have 3 remaining wishes", ({expect}) => {
    let genie = rubLamp();
    let numWishesLeft = genie |> getNumRemainingWishes;
    expect.int(numWishesLeft).toBe(3);
  });
  test("should be able to wish for a pony", ({expect}) => {
    let genie = rubLamp() |> wish("a pony");

    expect.int(genie |> getNumRemainingWishes).toBe(2);
    expect.string(genie |> getLastGrantedWish).toEqual("a pony");
  });
  test("should not be able to wish for more wishes", ({expect}) => {
    let genie = rubLamp() |> wish("more wishes!");

    expect.int(genie |> getNumRemainingWishes).toBe(3);
  });
});
