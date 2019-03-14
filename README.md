I'm trying to get bisect-ppx working in a fairly minimal environment that is representative of the tools that I like to use. Currently
I'm getting

```
Processing file '<command-line>'...
 *** system error: <command-line>: No such file or directory
```

and when I output to a text file I get
```
Coverage summary: 14/15 (93.33%)
File '<command-line>': 14/15 (93.33%)
```

to use, first install [esy](https://esy.sh/) and then just run
```
esy
```
to install dependencies
```
esy test
```
to run tests
and
```
esy coverage
```
for the current test script.

You can run
```
esy bisect-ppx-report ...
```
to iterate from the command line without needing to modify package.json
