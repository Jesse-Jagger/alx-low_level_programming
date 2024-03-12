#!/usr/bin/node

const args = process.argv.length;

if (process.argv.length === 3) {
  console.log('Argument found');
} else if (process.argv.length <= 2) {
  console.log('No Argument');
} else {
  console.log('Arguments found');
}
