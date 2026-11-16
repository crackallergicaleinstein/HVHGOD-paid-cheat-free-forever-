// FUN_1805aa2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aa2f0 */

int FUN_1805aa2f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *_Str1;
  char *_Str2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_res8;
  longlong local_res18;
  undefined1 local_268 [32];
  undefined8 local_248;
  code *local_238;
  undefined8 local_1d0;
  undefined4 local_1c8;
  char local_1c4;
  undefined4 local_1c0;
  undefined1 local_1b8 [28];
  int local_19c;
  longlong local_198;
  code *local_168;
  undefined4 local_160;
  undefined8 local_158 [4];
  undefined8 local_138;
  code *local_108;
  undefined8 local_100 [3];
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_b0;
  undefined1 local_a8 [80];
  code *local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  FUN_18063ab10(local_268,0,0x218);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  iVar3 = FUN_1805aa8a0(local_268,*(undefined8 *)(param_1 + 0xa0),uVar2,
                        *(undefined8 *)(param_1 + 0x2a0));
  if ((iVar3 == 0) && (iVar3 = FUN_1805aa630(param_1,local_268,local_1d0,local_1c8), iVar3 == 0)) {
    if (*(char *)(param_1 + 0x261) == '*') {
      *(undefined4 *)(param_1 + 0x240) = local_160;
      if (local_e8 == 0) {
        iVar3 = 3;
      }
      local_e8 = 0;
      *(undefined8 *)(param_1 + 0x210) = local_100[0];
      *(undefined8 *)(param_1 + 0x250) = local_e0;
      *(undefined8 *)(param_1 + 600) = local_d8;
      *(undefined8 *)(param_1 + 0x218) = local_158[0];
      *(undefined8 *)(param_1 + 0x248) = local_138;
      local_158[0] = 0;
      local_138 = 0;
      if (*(int *)(param_1 + 0x1e0) == 1) {
        iVar8 = 0;
        iVar9 = 0;
        local_res8 = 0;
        iVar7 = 0;
        if (0 < local_19c) {
          lVar10 = 0;
          local_res18 = 0;
          do {
            iVar6 = 0;
            _Str1 = *(char **)(local_198 + lVar10);
            *(undefined2 *)(local_res18 + *(longlong *)(param_1 + 0x1f8)) = 0;
            *(char **)(*(longlong *)(param_1 + 0x200) + lVar10) = ".notdef";
            if ((_Str1 != (char *)0x0) && (iVar1 = *(int *)(param_1 + 0x240), 0 < iVar1)) {
              lVar5 = *(longlong *)(param_1 + 0x248);
              do {
                _Str2 = *(char **)(lVar5 + (longlong)iVar6 * 8);
                iVar4 = strcmp(_Str1,_Str2);
                iVar8 = local_res8;
                if (iVar4 == 0) {
                  *(short *)(local_res18 + *(longlong *)(param_1 + 0x1f8)) = (short)iVar6;
                  *(char **)(*(longlong *)(param_1 + 0x200) + lVar10) = _Str2;
                  iVar6 = strcmp(".notdef",_Str2);
                  if (iVar6 != 0) {
                    iVar6 = iVar7;
                    if (iVar9 <= iVar7) {
                      iVar6 = iVar9;
                    }
                    iVar9 = iVar6;
                    if (local_res8 <= iVar7) {
                      local_res8 = iVar7 + 1;
                      iVar8 = local_res8;
                    }
                  }
                  break;
                }
                iVar6 = iVar6 + 1;
                lVar5 = *(longlong *)(param_1 + 0x248);
              } while (iVar6 < iVar1);
            }
            local_res18 = local_res18 + 2;
            iVar7 = iVar7 + 1;
            lVar10 = lVar10 + 8;
          } while (iVar7 < local_19c);
        }
        *(int *)(param_1 + 0x1ec) = iVar9;
        *(undefined4 *)(param_1 + 0x1e8) = local_1c0;
        *(int *)(param_1 + 0x1f0) = iVar8;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  if (local_168 != (code *)0x0) {
    (*local_168)(local_1b8);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_100);
  }
  if (local_108 != (code *)0x0) {
    (*local_108)(local_158);
  }
  if (local_58 != (code *)0x0) {
    (*local_58)(local_a8);
  }
  if (local_1c4 == '\0') {
    FUN_18057abd0(local_248,local_1d0);
    local_1d0 = 0;
  }
  if (local_238 != (code *)0x0) {
    (*local_238)(local_268);
  }
  if (iVar3 != 0) {
    FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  return iVar3;
}



