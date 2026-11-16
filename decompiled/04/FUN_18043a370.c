// FUN_18043a370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a370 */

undefined8 FUN_18043a370(float *param_1,uint param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  float fVar8;
  float local_res10 [6];
  undefined1 local_18 [16];
  
  local_res10[0] = (float)param_3;
  if (param_2 != 8) {
    uVar6 = (ushort)param_3;
    if (param_2 != 6) {
      if (0x200 < param_2) {
        sVar7 = (short)(param_3 >> 0x10);
        switch(param_2) {
        case 0x201:
          *(undefined2 *)(param_1 + 4) = 0x101;
          return 1;
        case 0x202:
          *(undefined1 *)(param_1 + 4) = 0;
          *(undefined1 *)((longlong)param_1 + 0x12) = 1;
          return 1;
        default:
          return 0;
        case 0x204:
          *(undefined2 *)(param_1 + 5) = 0x101;
          return 1;
        case 0x205:
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)((longlong)param_1 + 0x16) = 1;
          return 1;
        case 0x207:
          uVar1 = *(ulonglong *)(param_1 + 0x3a);
          if (uVar1 < 0x20) {
            *(ulonglong *)(param_1 + 0x3a) = uVar1 + 1;
            param_1[uVar1 + 0x1a] = 5.60519e-45;
          }
          local_res10[0] = 5.60519e-45;
          plVar4 = (longlong *)FUN_18043fb40(param_1 + 0x5e,local_18,local_res10);
          *(undefined1 *)(*plVar4 + 0x14) = 1;
          return 1;
        case 0x208:
          uVar1 = *(ulonglong *)(param_1 + 0x5c);
          if (uVar1 < 0x20) {
            *(ulonglong *)(param_1 + 0x5c) = uVar1 + 1;
            param_1[uVar1 + 0x3c] = 5.60519e-45;
          }
          break;
        case 0x20a:
          param_1[6] = (float)(int)sVar7 / 120.0 + param_1[6];
          return 1;
        case 0x20b:
          uVar1 = *(ulonglong *)(param_1 + 0x3a);
          local_res10[0] = (float)((sVar7 != 1) + 5);
          if (uVar1 < 0x20) {
            *(ulonglong *)(param_1 + 0x3a) = uVar1 + 1;
            param_1[uVar1 + 0x1a] = local_res10[0];
          }
          plVar4 = (longlong *)FUN_18043f940(param_1 + 0x5e,local_18,local_res10);
          *(undefined1 *)(*plVar4 + 0x14) = 1;
          return 1;
        case 0x20c:
          uVar1 = *(ulonglong *)(param_1 + 0x5c);
          local_res10[0] = (float)((sVar7 != 1) + 5);
          if (uVar1 < 0x20) {
            *(ulonglong *)(param_1 + 0x5c) = uVar1 + 1;
            param_1[uVar1 + 0x3c] = local_res10[0];
          }
          plVar4 = (longlong *)FUN_18043f940(param_1 + 0x5e,local_18,local_res10);
          *(undefined1 *)(*plVar4 + 0x14) = 0;
          return 1;
        }
        local_res10[0] = 5.60519e-45;
        plVar4 = (longlong *)FUN_18043fb40(param_1 + 0x5e,local_18,local_res10);
        *(undefined1 *)(*plVar4 + 0x14) = 0;
        return 1;
      }
      if (param_2 == 0x200) {
        *param_1 = (float)(int)(short)param_4;
        param_1[1] = (float)(int)(short)((ulonglong)param_4 >> 0x10);
        return 1;
      }
      uVar5 = (uint)((ulonglong)param_4 >> 0x18);
      uVar2 = (uint)((ulonglong)param_4 >> 0x10);
      if (param_2 == 0x100) {
LAB_18043a4bc:
        if (local_res10[0] == 2.24208e-44) {
          local_res10[0] = (float)MapVirtualKeyW(uVar2 & 0xff,3);
          param_3 = (ulonglong)(uint)local_res10[0];
        }
        else if (local_res10[0] == 2.38221e-44) {
          local_res10[0] = (float)((uVar5 & 1) + 0xa2);
          param_3 = (ulonglong)(uint)local_res10[0];
        }
        else if (local_res10[0] == 2.52234e-44) {
          local_res10[0] = (float)((uVar5 & 1) + 0xa4);
          param_3 = (ulonglong)(uint)local_res10[0];
        }
        fVar8 = (float)param_3;
        cVar3 = FUN_18043a1a0(param_1,param_3 & 0xffffffff);
        if (cVar3 != '\0') {
          return 1;
        }
        uVar1 = *(ulonglong *)(param_1 + 0x3a);
        if (uVar1 < 0x20) {
          *(ulonglong *)(param_1 + 0x3a) = uVar1 + 1;
          param_1[uVar1 + 0x1a] = fVar8;
        }
        plVar4 = (longlong *)FUN_18043f940(param_1 + 0x5e,local_18,local_res10);
        *(undefined1 *)(*plVar4 + 0x14) = 1;
        return 1;
      }
      if (param_2 != 0x101) {
        if (param_2 == 0x102) {
          if (uVar6 < 0x20) {
            return 1;
          }
          if (uVar6 == 0x7f) {
            return 1;
          }
          uVar1 = *(ulonglong *)(param_1 + 0x18);
          if (uVar1 < 0x20) {
            *(ulonglong *)(param_1 + 0x18) = uVar1 + 1;
            *(ushort *)((longlong)param_1 + uVar1 * 2 + 0x1c) = uVar6;
            return 1;
          }
          return 1;
        }
        if (param_2 == 0x104) goto LAB_18043a4bc;
        if (param_2 != 0x105) {
          return 0;
        }
      }
      if (local_res10[0] == 2.24208e-44) {
        local_res10[0] = (float)MapVirtualKeyW(uVar2 & 0xff,3);
      }
      else if (local_res10[0] == 2.38221e-44) {
        local_res10[0] = (float)((uVar5 & 1) + 0xa2);
      }
      else if (local_res10[0] == 2.52234e-44) {
        local_res10[0] = (float)((uVar5 & 1) + 0xa4);
      }
      uVar1 = *(ulonglong *)(param_1 + 0x5c);
      if (uVar1 < 0x20) {
        *(ulonglong *)(param_1 + 0x5c) = uVar1 + 1;
        param_1[uVar1 + 0x3c] = local_res10[0];
      }
      plVar4 = (longlong *)FUN_18043f940(param_1 + 0x5e,local_18,local_res10);
      *(undefined1 *)(*plVar4 + 0x14) = 0;
      return 1;
    }
    if (uVar6 != 0) {
      return 0;
    }
  }
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  param_1[6] = 0.0;
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  param_1[0x3a] = 0.0;
  param_1[0x3b] = 0.0;
  param_1[0x5c] = 0.0;
  param_1[0x5d] = 0.0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_180204c30(param_1 + 0x5e);
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return 1;
}



