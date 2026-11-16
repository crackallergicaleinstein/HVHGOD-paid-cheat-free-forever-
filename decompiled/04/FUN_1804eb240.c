// FUN_1804eb240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eb240 */

byte * FUN_1804eb240(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  bVar2 = *param_1;
  if (0x1f < bVar2) {
    pbVar1 = param_1 + 1;
    if (bVar2 < 0x80) {
      if (bVar2 < 0x40) {
        puVar4 = DAT_180c62d98 + (bVar2 - 0x1f);
        if (puVar4 <= DAT_180c62d68) {
          if (pbVar1 < DAT_180c62d60) {
            puVar4 = DAT_180c62d68 + 1;
          }
          else {
            FUN_18063aed0(DAT_180c62d98,pbVar1,bVar2 - 0x1f);
          }
        }
        DAT_180c62d98 = puVar4;
        return param_1 + ((ulonglong)*param_1 - 0x1e);
      }
      uVar5 = param_1[2] + 1;
      puVar4 = DAT_180c62d98 + ((ulonglong)bVar2 * -0x100 - (ulonglong)*pbVar1) + 0x3fff;
      if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
        DAT_180c62d98 = DAT_180c62d98 + uVar5;
        return param_1 + 3;
      }
      if (puVar4 < DAT_180c62d90) {
        DAT_180c62d98 = DAT_180c62d68 + 1;
        return param_1 + 3;
      }
      do {
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        *DAT_180c62d98 = uVar3;
        DAT_180c62d98 = DAT_180c62d98 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return param_1 + 3;
    }
    uVar5 = bVar2 - 0x7f;
    puVar4 = DAT_180c62d98 + (-1 - (ulonglong)*pbVar1);
    if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
      DAT_180c62d98 = DAT_180c62d98 + uVar5;
      return param_1 + 2;
    }
    if (puVar4 < DAT_180c62d90) {
      DAT_180c62d98 = DAT_180c62d68 + 1;
      return param_1 + 2;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        *DAT_180c62d98 = uVar3;
        DAT_180c62d98 = DAT_180c62d98 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return param_1 + 2;
  }
  if (0x17 < bVar2) {
    uVar5 = param_1[3] + 1;
    puVar4 = DAT_180c62d98 +
             ((ulonglong)CONCAT11(bVar2,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0x17ffff;
    if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
      DAT_180c62d98 = DAT_180c62d98 + uVar5;
      return param_1 + 4;
    }
    if (puVar4 < DAT_180c62d90) {
      DAT_180c62d98 = DAT_180c62d68 + 1;
      return param_1 + 4;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_180c62d98 = uVar3;
      DAT_180c62d98 = DAT_180c62d98 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 4;
  }
  if (0xf < bVar2) {
    uVar5 = (uint)param_1[4] + (uint)param_1[3] * 0x100 + 1;
    puVar4 = DAT_180c62d98 +
             ((ulonglong)CONCAT11(bVar2,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0xfffff;
    if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
      DAT_180c62d98 = DAT_180c62d98 + uVar5;
      return param_1 + 5;
    }
    if (puVar4 < DAT_180c62d90) {
      DAT_180c62d98 = DAT_180c62d68 + 1;
      return param_1 + 5;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_180c62d98 = uVar3;
      DAT_180c62d98 = DAT_180c62d98 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 5;
  }
  if (7 < bVar2) {
    puVar4 = DAT_180c62d98 + ((param_1[1] - 0x7ff) + (uint)bVar2 * 0x100);
    if (puVar4 <= DAT_180c62d68) {
      if (param_1 + 2 < DAT_180c62d60) {
        puVar4 = DAT_180c62d68 + 1;
      }
      else {
        FUN_18063aed0(DAT_180c62d98,param_1 + 2);
      }
    }
    DAT_180c62d98 = puVar4;
    return param_1 + (ulonglong)*param_1 * 0x100 + -0x7fd + (ulonglong)param_1[1];
  }
  if (bVar2 == 7) {
    puVar4 = DAT_180c62d98 + (ulonglong)param_1[2] + (ulonglong)param_1[1] * 0x100 + 1;
    if (puVar4 <= DAT_180c62d68) {
      if (param_1 + 3 < DAT_180c62d60) {
        puVar4 = DAT_180c62d68 + 1;
      }
      else {
        FUN_18063aed0();
      }
    }
    DAT_180c62d98 = puVar4;
    return param_1 + (ulonglong)param_1[1] * 0x100 + 4 + (ulonglong)param_1[2];
  }
  if (bVar2 == 6) {
    uVar5 = param_1[4] + 1;
    puVar4 = DAT_180c62d98 +
             ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
    if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
      DAT_180c62d98 = DAT_180c62d98 + uVar5;
      return param_1 + 5;
    }
    if (puVar4 < DAT_180c62d90) {
      DAT_180c62d98 = DAT_180c62d68 + 1;
      return param_1 + 5;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_180c62d98 = uVar3;
      DAT_180c62d98 = DAT_180c62d98 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 5;
  }
  if (bVar2 == 4) {
    uVar5 = (uint)param_1[5] + (uint)param_1[4] * 0x100 + 1;
    puVar4 = DAT_180c62d98 +
             ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
    if (DAT_180c62d68 < DAT_180c62d98 + uVar5) {
      DAT_180c62d98 = DAT_180c62d98 + uVar5;
      return param_1 + 6;
    }
    if (puVar4 < DAT_180c62d90) {
      DAT_180c62d98 = DAT_180c62d68 + 1;
      return param_1 + 6;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_180c62d98 = uVar3;
      DAT_180c62d98 = DAT_180c62d98 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    param_1 = param_1 + 6;
  }
  return param_1;
}



