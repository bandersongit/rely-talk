# rely-talk


[![CircleCI](https://circleci.com/gh/yourgithubhandle/rely-talk/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/rely-talk/tree/master)


**Contains the following libraries and executables:**

```
rely-talk@0.0.0
│
├─test/
│   name:    TestRelyTalk.exe
│   main:    TestRelyTalk
│   require: rely-talk.lib
│
├─library/
│   library name: rely-talk.lib
│   namespace:    RelyTalk
│   require:
│
└─executable/
    name:    RelyTalkApp.exe
    main:    RelyTalkApp
    require: rely-talk.lib
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x RelyTalkApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
