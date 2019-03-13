open TestFramework;

let sayHello = () => "hello world";

describe("snapshot demo test", ({test}) => {
    test("show what snapshots are", ({expect}) => {
        expect.string(sayHello() ++ "s").toMatchSnapshot();
    });
});
