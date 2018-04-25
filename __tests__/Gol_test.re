open Jest;
open Gol;

describe("Gol", () => {
  open Expect;

  test("toBe", () =>
    expect(1 + 2) |> toBe(3));

  test("foo", () =>
    expect(add5(4)) |> toBe(9));
});
