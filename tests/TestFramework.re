let projectDir = Filename.(__FILE__ |> dirname |> dirname);

include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir:
        Filename.(
          projectDir
          |> (dir => concat(dir, "tests"))
          |> (dir => concat(dir, "__snapshots__"))
        ),
      projectDir,
    });
});
