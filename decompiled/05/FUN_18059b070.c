// FUN_18059b070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059b070 */

int FUN_18059b070(longlong param_1)

{
  int *piVar1;
  char *_Str2;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10;
  longlong local_res18;
  char *local_res20;
  undefined1 local_2e8 [32];
  undefined8 local_2c8;
  code *local_2b8;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  char local_233;
  undefined4 local_230;
  undefined1 local_228 [28];
  int local_20c;
  longlong local_208;
  code *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8 [4];
  undefined8 local_1a8;
  code *local_178;
  undefined8 local_170 [3];
  int local_158;
  undefined8 local_150;
  undefined8 local_148;
  code *local_120;
  undefined1 local_118 [80];
  code *local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [3];
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_68;
  undefined8 local_60;
  
  uVar4 = *(undefined8 *)(param_1 + 0x2a0);
  FUN_18063ab10(local_2e8,0,0x298);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x184) = 7;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xf5c;
  *(undefined4 *)(param_1 + 0x180) = 0x27a000;
  local_res8[0] =
       FUN_18059ae40(local_2e8,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98),uVar4
                    );
  if ((((local_res8[0] == 0) &&
       (local_res8[0] = FUN_18059bd60(param_1,local_2e8,local_250,local_248), local_res8[0] == 0))
      && (local_res8[0] = FUN_18059a9d0(local_2e8,uVar4), local_res8[0] == 0)) &&
     (local_res8[0] = FUN_18059bd60(param_1,local_2e8,local_240,local_238), local_res8[0] == 0)) {
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfe;
    piVar1 = *(int **)(param_1 + 0x2e0);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 1 << ((byte)piVar1[1] & 0x1f))) {
      FUN_1805981f0(param_1);
    }
    lVar10 = *(longlong *)(param_1 + 0x2e0);
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x2f8) != 0)) &&
       (*(int *)(lVar10 + 0x2f8) != *(int *)(lVar10 + 4))) {
      *(undefined4 *)(lVar10 + 0x2f8) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x2e0);
    if ((piVar1 != (int *)0x0) && ((*piVar1 == 0 || (piVar1[1] == 0)))) {
      FUN_1805981f0(param_1);
    }
    if ((*(longlong *)(param_1 + 0x2e0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x108) == 0)) {
      FUN_1805981f0(param_1);
    }
    if ((*(longlong *)(param_1 + 0x2e0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x28) == 0)) {
      FUN_1805981f0(param_1);
    }
    lVar10 = *(longlong *)(param_1 + 0x2e0);
    if (lVar10 != 0) {
      uVar5 = 0;
      if (*(uint *)(lVar10 + 4) != 0) {
        do {
          if (*(char *)(lVar10 + ((ulonglong)uVar5 + 7) * 0x18) == '\0') {
            FUN_1805981f0(param_1);
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(lVar10 + 4));
      }
    }
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    else if (*(int *)(param_1 + 0x2f0) != 0) {
      uVar4 = FUN_18057ad10(*(undefined8 *)(param_1 + 0x98),4,0,*(int *)(param_1 + 0x2f0),0,
                            local_res8);
      *(undefined8 *)(param_1 + 0x2f8) = uVar4;
      if (local_res8[0] != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 0;
        goto LAB_18059b551;
      }
    }
    *(undefined4 *)(param_1 + 0x240) = local_1d0;
    if (local_a0 != 0) {
      *(undefined4 *)(param_1 + 0x220) = local_c0;
      *(undefined8 *)(param_1 + 0x208) = local_b8[0];
      *(undefined8 *)(param_1 + 0x228) = local_98;
      *(undefined8 *)(param_1 + 0x230) = local_90;
      *(undefined8 *)(param_1 + 0x238) = local_60;
      local_a0 = 0;
      local_60 = 0;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) && (local_158 == 0)) {
      local_res8[0] = 3;
    }
    *(undefined8 *)(param_1 + 0x210) = local_170[0];
    *(undefined8 *)(param_1 + 0x250) = local_150;
    *(undefined8 *)(param_1 + 600) = local_148;
    *(undefined8 *)(param_1 + 0x218) = local_1c8[0];
    *(undefined8 *)(param_1 + 0x248) = local_1a8;
    local_158 = 0;
    local_1c8[0] = 0;
    local_1a8 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      iVar2 = 0;
      iVar7 = 0;
      iVar9 = 0;
      local_res10 = 0;
      if (0 < local_20c) {
        lVar10 = 0;
        local_res18 = 0;
        do {
          uVar8 = 0;
          local_res20 = *(char **)(local_208 + lVar10);
          *(undefined2 *)(local_res18 + *(longlong *)(param_1 + 0x1f8)) = 0;
          *(char **)(*(longlong *)(param_1 + 0x200) + lVar10) = ".notdef";
          if (local_res20 != (char *)0x0) {
            iVar3 = *(int *)(param_1 + 0x240);
            if (0 < iVar3) {
              lVar6 = *(longlong *)(param_1 + 0x248);
              do {
                _Str2 = *(char **)(lVar6 + uVar8 * 8);
                iVar2 = strcmp(local_res20,_Str2);
                if (iVar2 == 0) {
                  *(short *)(local_res18 + *(longlong *)(param_1 + 0x1f8)) = (short)uVar8;
                  *(char **)(*(longlong *)(param_1 + 0x200) + lVar10) = _Str2;
                  iVar3 = strcmp(".notdef",_Str2);
                  iVar2 = local_res10;
                  if (iVar3 != 0) {
                    iVar3 = iVar7;
                    if (iVar9 <= iVar7) {
                      iVar3 = iVar9;
                    }
                    iVar9 = iVar3;
                    if (local_res10 <= iVar7) {
                      local_res10 = iVar7 + 1;
                      iVar2 = local_res10;
                    }
                  }
                  break;
                }
                uVar5 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar5;
                lVar6 = *(longlong *)(param_1 + 0x248);
                iVar2 = local_res10;
              } while ((int)uVar5 < iVar3);
            }
          }
          local_res18 = local_res18 + 2;
          iVar7 = iVar7 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar7 < local_20c);
      }
      *(int *)(param_1 + 0x1ec) = iVar9;
      *(undefined4 *)(param_1 + 0x1e8) = local_230;
      *(int *)(param_1 + 0x1f0) = iVar2;
    }
    if ((1000 < *(int *)(param_1 + 0x184)) || (*(int *)(param_1 + 0x184) < 0)) {
      *(undefined4 *)(param_1 + 0x184) = 7;
    }
    if ((1000 < *(int *)(param_1 + 0x188)) || (*(int *)(param_1 + 0x188) < 0)) {
      *(undefined4 *)(param_1 + 0x188) = 1;
    }
  }
LAB_18059b551:
  uVar4 = local_2c8;
  if (local_1d8 != (code *)0x0) {
    (*local_1d8)(local_228);
  }
  if (local_120 != (code *)0x0) {
    (*local_120)(local_170);
  }
  if (local_178 != (code *)0x0) {
    (*local_178)(local_1c8);
  }
  if (local_c8 != (code *)0x0) {
    (*local_c8)(local_118);
  }
  if (local_68 != (code *)0x0) {
    (*local_68)(local_b8);
  }
  FUN_18057a400(local_60,uVar4);
  FUN_18057abd0(uVar4,local_60);
  local_60 = 0;
  FUN_18057abd0(local_2c8,local_240);
  local_240 = 0;
  if (local_233 == '\0') {
    FUN_18057abd0(local_2c8,local_250);
    local_250 = 0;
  }
  (*local_2b8)(local_2e8);
  return local_res8[0];
}



