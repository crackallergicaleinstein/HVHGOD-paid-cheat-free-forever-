// FUN_1805bd990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd990 */

int FUN_1805bd990(undefined8 param_1,longlong param_2,uint param_3,code *param_4,code *param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  char *_Str2;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int local_d8;
  uint local_d4;
  int local_d0 [12];
  undefined8 local_a0;
  uint local_98 [4];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  local_60 = param_5;
  local_70 = param_6;
  local_d0[10] = param_3 + 10;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d4 = param_3;
  local_a0 = param_1;
  local_68 = param_4;
  local_58 = param_2;
  puVar5 = (uint *)FUN_18057ac40(param_1,8,0,local_d0[10],0,&local_d8);
  pcVar2 = local_68;
  uVar1 = local_70;
  *(uint **)(param_2 + 0x20) = puVar5;
  if (local_d8 == 0) {
    uVar16 = 0;
    iVar4 = 0;
    iVar14 = 0;
    iVar13 = 0;
    iVar15 = 0;
    iVar12 = 0;
    if (local_d4 != 0) {
      do {
        _Str2 = (char *)(*pcVar2)(uVar1,uVar16);
        if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) {
          uVar9 = 0;
          piVar10 = &DAT_180684748;
          do {
            iVar4 = strcmp("Delta" + *piVar10,_Str2);
            if (iVar4 == 0) {
              if (local_d0[uVar9] == 0) {
                local_d0[uVar9] = 1;
                local_98[uVar9] = uVar16;
              }
              break;
            }
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
            piVar10 = piVar10 + 1;
          } while (uVar11 < 10);
          uVar11 = FUN_1805bd780();
          if ((uVar11 & 0x7fffffff) != 0) {
            uVar9 = 0;
            puVar8 = &DAT_1806846c0;
            do {
              if (uVar11 == *puVar8) {
                local_d0[uVar9] = 2;
                break;
              }
              uVar7 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar7;
              puVar8 = puVar8 + 1;
            } while (uVar7 < 10);
            *puVar5 = uVar11;
            puVar5[1] = uVar16;
            puVar5 = puVar5 + 2;
          }
          if (local_60 != (code *)0x0) {
            (*local_60)(uVar1,_Str2);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < local_d4);
      iVar4 = local_d0[1];
      iVar14 = local_d0[4];
      iVar13 = local_d0[3];
      iVar15 = local_d0[2];
      iVar12 = local_d0[0];
    }
    lVar3 = local_58;
    if (iVar12 == 1) {
      puVar5[1] = local_98[0];
      *puVar5 = 0x394;
      puVar5 = puVar5 + 2;
    }
    if (iVar4 == 1) {
      *puVar5 = 0x3a9;
      puVar5[1] = local_98[1];
      puVar5 = puVar5 + 2;
    }
    if (iVar15 == 1) {
      *puVar5 = 0x2215;
      puVar5[1] = local_98[2];
      puVar5 = puVar5 + 2;
    }
    if (iVar13 == 1) {
      *puVar5 = 0xad;
      puVar5[1] = local_98[3];
      puVar5 = puVar5 + 2;
    }
    if (iVar14 == 1) {
      *puVar5 = 0x2c9;
      puVar5[1] = local_88;
      puVar5 = puVar5 + 2;
    }
    if (local_d0[5] == 1) {
      *puVar5 = 0x3bc;
      puVar5[1] = local_84;
      puVar5 = puVar5 + 2;
    }
    if (local_d0[6] == 1) {
      *puVar5 = 0x2219;
      puVar5[1] = local_80;
      puVar5 = puVar5 + 2;
    }
    if (local_d0[7] == 1) {
      *puVar5 = 0xa0;
      puVar5[1] = local_7c;
      puVar5 = puVar5 + 2;
    }
    if (local_d0[8] == 1) {
      *puVar5 = 0x21a;
      puVar5[1] = local_78;
      puVar5 = puVar5 + 2;
    }
    if (local_d0[9] == 1) {
      *puVar5 = 0x21b;
      puVar5[1] = local_74;
      puVar5 = puVar5 + 2;
    }
    lVar6 = *(longlong *)(local_58 + 0x20);
    uVar9 = (longlong)puVar5 - lVar6 >> 3;
    uVar16 = (uint)uVar9;
    if (uVar16 == 0) {
      FUN_18057abd0(local_a0,lVar6);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      if (local_d8 == 0) {
        local_d8 = 0xa3;
      }
    }
    else {
      if (uVar16 < local_d4 >> 1) {
        lVar6 = FUN_18057ac40(local_a0,8,local_d0[10],uVar9 & 0xffffffff,lVar6,&local_d8);
        *(longlong *)(lVar3 + 0x20) = lVar6;
        local_d8 = 0;
      }
      FUN_1806192c0(lVar6,uVar9 & 0xffffffff,8,FUN_1805bde90);
    }
    *(uint *)(lVar3 + 0x18) = uVar16;
  }
  return local_d8;
}



