// FUN_1800ef8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef8b0 */

undefined8 * FUN_1800ef8b0(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0x8000000000000000;
  switch(*param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_2) {
    case 1:
      goto switchD_1800ef8fb_caseD_1;
    case 2:
      goto switchD_1800ef8fb_caseD_2;
    }
  default:
    uStack_10 = 1;
    break;
  case 1:
switchD_1800ef8fb_caseD_1:
    uStack_20 = **(undefined8 **)(param_2 + 8);
    break;
  case 2:
switchD_1800ef8fb_caseD_2:
    uStack_18 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
  }
  *param_1 = param_2;
  param_1[1] = uStack_20;
  param_1[2] = uStack_18;
  param_1[3] = uStack_10;
  return param_1;
}



