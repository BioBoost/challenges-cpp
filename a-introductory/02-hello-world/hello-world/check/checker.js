console.log("Checking your solution ...");

const util = require('util');
const exec = util.promisify(require('child_process').exec);

async function run_binary(file) {
  try {
    const { stdout, stderr } = await exec(file);
    // console.log('stdout:', stdout);
    // console.log('stderr:', stderr);

    if (stdout.match(/Hello World from the C\+\+ Universe!/)) {
      console.log("All is well");
    } else {
      console.log("Did not detect the required output");
    }

  } catch (err) {
    console.error(`Could not find ${file}`);
  };
}

// Run binary
run_binary('./hello');