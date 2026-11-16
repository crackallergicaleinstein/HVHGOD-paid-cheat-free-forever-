// FUN_1805ca430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ca430 */

ulonglong FUN_1805ca430(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  iVar7 = *(int *)(param_1 + 0x270);
  local_res8[0] = 0;
  uVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,lVar2,local_res10);
  local_res8[0] = (uint)uVar5;
  if ((local_res8[0] == 0) && (0x21 < local_res10[0])) {
    uVar5 = FUN_180578910(lVar2,0x20);
    local_res8[0] = (uint)uVar5;
    if (local_res8[0] == 0) {
      uVar4 = FUN_180578720(lVar2,local_res8);
      uVar5 = (ulonglong)local_res8[0];
      if (((local_res8[0] == 0) && (uVar4 <= *(ushort *)(param_1 + 0x174))) && (uVar4 != 0)) {
        if (iVar7 == 0x20000) {
          uVar5 = FUN_1805ca220(param_1 + 0x358,lVar2,uVar4,local_res10[0] - 0x22);
        }
        else if (iVar7 == 0x25000) {
          uVar8 = (uint)uVar4;
          if ((local_res10[0] - 0x22 < uVar8) || (0x182 < uVar4)) {
            uVar5 = 3;
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x30);
            puVar6 = (undefined2 *)FUN_18057ac40(uVar3,2,0,uVar8,0,local_res18);
            if ((local_res18[0] == 0) &&
               (local_res18[0] = FUN_180577bf0(lVar2,uVar8), local_res18[0] == 0)) {
              pcVar11 = *(char **)(lVar2 + 0x38);
              uVar8 = 0;
              if (uVar4 != 0) {
                puVar10 = puVar6;
                do {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  iVar7 = (int)cVar1 + uVar8;
                  if ((iVar7 < 0) || (0x101 < iVar7)) {
                    iVar7 = 0;
                  }
                  *puVar10 = (short)iVar7;
                  uVar9 = (short)uVar8 + 1;
                  uVar8 = (uint)uVar9;
                  puVar10 = puVar10 + 1;
                } while (uVar9 < uVar4);
              }
              FUN_180577d30(lVar2);
              uVar5 = 0;
              *(ushort *)(param_1 + 0x35a) = uVar4;
              *(undefined2 **)(param_1 + 0x360) = puVar6;
            }
            else {
              FUN_18057abd0(uVar3,puVar6);
              uVar5 = (ulonglong)local_res18[0];
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  return uVar5;
}



