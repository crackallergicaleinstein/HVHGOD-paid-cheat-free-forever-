// FUN_1804246e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804246e0 */

undefined8 FUN_1804246e0(undefined1 param_1)

{
  switch(param_1) {
  case 0x41:
  case 0x61:
    return 7;
  default:
    return 0xffffffff;
  case 0x43:
  case 99:
    return 6;
  case 0x48:
  case 0x56:
  case 0x68:
  case 0x76:
    return 1;
  case 0x4c:
  case 0x4d:
  case 0x54:
  case 0x6c:
  case 0x6d:
  case 0x74:
    return 2;
  case 0x51:
  case 0x53:
  case 0x71:
  case 0x73:
    return 4;
  case 0x5a:
  case 0x7a:
    return 0;
  }
}



