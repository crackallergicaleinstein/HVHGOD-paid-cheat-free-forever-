// FUN_1805242e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805242e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805242e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_80 = param_3;
  FUN_1800ea030(param_2,&local_78,&local_80);
  uVar3 = FUN_1800f3e20(param_2,local_a0);
  cVar1 = FUN_1800e6ca0(&local_78,uVar3);
  if ((cVar1 == '\0') && (pcVar4 = (char *)FUN_1800f34a0(&local_78), *pcVar4 == '\x02')) {
    uVar3 = FUN_1800f34a0(&local_78);
    lVar5 = FUN_1800f3d40(uVar3);
    if (lVar5 == 4) {
      uVar9 = 0;
      auVar12 = ZEXT464(0x3f800000);
      fVar13 = 0.0;
      do {
        pcVar4 = (char *)FUN_1800f3560(&local_78);
        if (*pcVar4 != '\x02') {
          local_80 = FUN_180112a50(pcVar4);
          uVar3 = FUN_18010f410(local_a0);
          FUN_1800f6ca0(&local_78,0x131,uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(&local_78,&DAT_1808d1050);
        }
        local_a4 = (float)FUN_1800e6880(uVar9 * 0x10 + **(longlong **)(pcVar4 + 8));
        fVar11 = local_a4;
        sVar2 = thunk_FUN_180624430();
        fVar10 = auVar12._0_4_;
        if (sVar2 < 1) {
          local_80 = CONCAT44(local_80._4_4_,fVar10);
          local_a8 = fVar13;
          pfVar7 = &local_a8;
          if (fVar13 <= fVar11) {
            pfVar7 = &local_a4;
          }
          pfVar6 = (float *)&local_80;
          if (fVar11 <= fVar10) {
            pfVar6 = pfVar7;
          }
          fVar10 = *pfVar6;
        }
        *param_4 = fVar10;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        param_4 = param_4 + 1;
      } while ((int)uVar8 < 4);
    }
  }
}



