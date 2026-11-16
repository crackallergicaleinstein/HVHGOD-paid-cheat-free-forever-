// FUN_180599aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180599aa0 */

void FUN_180599aa0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  byte *_Str1;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  pbVar4 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (pbVar4 <= _Str1) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  bVar1 = *_Str1;
  if ((9 < bVar1 - 0x30) && (bVar1 != 0x5b)) {
    if ((_Str1 + 0x11 < pbVar4) &&
       (iVar8 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
      return;
    }
    if ((_Str1 + 0xf < pbVar4) && (iVar8 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar8 == 0))
    {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
      return;
    }
    if ((_Str1 + 0x12 < pbVar4) &&
       (iVar8 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
      return;
    }
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  uVar5 = param_2[4];
  bVar7 = false;
  if (bVar1 == 0x5b) {
    bVar7 = true;
    local_res18 = 0x100;
    local_res20 = 0x100;
    *param_2 = (ulonglong)(_Str1 + 1);
  }
  else {
    local_res20 = (*(code *)param_2[9])(param_2);
    local_res18 = local_res20;
    if (0x100 < local_res20) {
      local_res18 = 0x100;
    }
  }
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar4) {
    iVar8 = 0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      FUN_18057abd0(uVar5);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      FUN_18057abd0(uVar5,*(undefined8 *)(param_1 + 0x200));
      *(undefined8 *)(param_1 + 0x200) = 0;
      if ((code *)param_2[0x22] != (code *)0x0) {
        (*(code *)param_2[0x22])(param_2 + 0x18);
      }
    }
    iVar9 = local_res18;
    *(int *)(param_1 + 0x1e8) = local_res18;
    *(int *)(param_2 + 0x17) = local_res18;
    uVar10 = FUN_18057ac40(uVar5,2,0,local_res18,0,local_res10);
    *(undefined8 *)(param_1 + 0x1f8) = uVar10;
    if (local_res10[0] == 0) {
      uVar10 = FUN_18057ac40(uVar5,8,0,iVar9,0,local_res10);
      *(undefined8 *)(param_1 + 0x200) = uVar10;
      if ((local_res10[0] == 0) &&
         (local_res10[0] = (**(code **)*puVar3)(param_2 + 0x18,iVar9,uVar5), local_res10[0] == 0)) {
        iVar11 = 0;
        local_res10[0] = 0;
        if (0 < iVar9) {
          do {
            (*(code *)param_2[0x21])(param_2 + 0x18,iVar11,".notdef",8);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar9);
        }
LAB_180599d85:
        do {
          (*(code *)param_2[7])(param_2);
          pbVar6 = (byte *)*param_2;
          if (pbVar4 <= pbVar6) goto LAB_180599eec;
          bVar1 = *pbVar6;
          if (bVar1 == 100) {
            _Str1 = pbVar6 + 3;
            if (((_Str1 < pbVar4) && (pbVar6[1] == 0x65)) && (pbVar6[2] == 0x66)) {
              bVar2 = *_Str1;
              if (((bVar2 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0))
                 || (((byte)(bVar2 - 0x3e) < 0x40 &&
                     ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))))
              goto LAB_180599eec;
              goto LAB_180599df6;
            }
          }
          else {
LAB_180599df6:
            if (bVar1 == 0x5d) {
              _Str1 = pbVar6 + 1;
LAB_180599eec:
              *(undefined4 *)(param_1 + 0x1e0) = 1;
              *param_2 = (ulonglong)_Str1;
              return;
            }
          }
          if (bVar1 - 0x30 < 10) {
            if (bVar7) goto LAB_180599e29;
            iVar9 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[7])(param_2);
            if (pbVar6 == (byte *)*param_2) goto LAB_180599edb;
LAB_180599e4b:
            _Str1 = (byte *)*param_2;
            if (((_Str1 + 2 < pbVar4) && (*_Str1 == 0x2f)) && (iVar8 < local_res20)) {
              _Str1 = _Str1 + 1;
              *param_2 = (ulonglong)_Str1;
              (*(code *)param_2[8])(param_2);
              if (pbVar4 <= (byte *)*param_2) {
                return;
              }
              if ((int)param_2[3] != 0) {
                return;
              }
              uVar12 = (int)(byte *)*param_2 - (int)_Str1;
              if (iVar8 < local_res18) {
                iVar11 = (*(code *)param_2[0x21])(param_2 + 0x18,iVar9,_Str1,uVar12 + 1);
                *(int *)(param_2 + 3) = iVar11;
                if (iVar11 != 0) {
                  return;
                }
                *(undefined1 *)
                 ((ulonglong)uVar12 + *(longlong *)(param_2[0x1c] + (longlong)iVar9 * 8)) = 0;
              }
              iVar8 = iVar8 + 1;
            }
            else if (bVar7) {
LAB_180599edb:
              *(undefined4 *)(param_2 + 3) = 2;
              return;
            }
            goto LAB_180599d85;
          }
          if (bVar7) {
LAB_180599e29:
            iVar9 = iVar8;
            goto LAB_180599e4b;
          }
          (*(code *)param_2[8])(param_2);
          _Str1 = pbVar6;
          if ((int)param_2[3] != 0) {
            return;
          }
        } while( true );
      }
    }
    *(int *)(param_2 + 3) = local_res10[0];
  }
  return;
}



