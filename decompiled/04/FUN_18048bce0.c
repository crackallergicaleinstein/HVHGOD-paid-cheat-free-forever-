// FUN_18048bce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048bce0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18048bce0(undefined8 param_1,int *param_2,int param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  float *local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if (DAT_180bbecdb == '\0') {
    local_c0 = &local_a8;
    local_b8 = 0;
    fVar8 = 0.0;
    local_c8 = local_c8 & 0xffffffff00000000;
    local_50[0] = 0;
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,0x429c0000);
    local_d8 = (float *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
    puVar6 = (undefined8 *)FUN_180487810(&local_80,param_1,0,param_5);
    local_a8 = *puVar6;
    uStack_a0 = puVar6[1];
    uStack_98 = puVar6[2];
    uStack_90 = puVar6[3];
    local_80 = local_a8;
    uStack_78 = uStack_a0;
    uStack_70 = uStack_98;
    uStack_68 = uStack_90;
    FUN_1804c2800(param_1);
    local_d8 = &local_58;
    local_60 = fVar8;
    local_5c = fVar8;
    local_58 = fVar8;
    local_54 = fVar8;
    FUN_18048b8e0(&local_a8,DAT_180b0a41c * 62.0,param_5,&local_60);
    FUN_18015abc0(local_50,0x10,&DAT_1807c6e5c,*param_2);
    uVar1 = DAT_180b0a450;
    if (param_5 == '\0') {
      fVar7 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
      uVar3 = DAT_180c62ca8;
      lVar2 = DAT_180bb8ae8;
      fVar8 = DAT_180b0a41c * 6.0;
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      local_d0 = local_50;
      local_c8 = 0;
      local_a8 = CONCAT44((float)uStack_70 - fVar7 * 0.5,fVar8 + local_60);
      local_d8 = (float *)CONCAT44(local_d8._4_4_,uVar1);
      FUN_180463450(*(undefined8 *)(*(longlong *)(lVar2 + 0x14d0) + 0x2c8),uVar3);
    }
    else {
      local_b8 = CONCAT44(local_b8._4_4_,1);
      local_88 = local_58 - DAT_180b0a41c * 6.0;
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_d0 = (undefined8 *)&DAT_180700844;
      local_84 = local_54;
      local_d8 = &local_88;
      local_a8 = CONCAT44(local_5c,DAT_180b0a41c * 6.0 + local_60);
      cVar4 = FUN_1804ad540("##number",local_50,0x10,&local_a8);
      if (cVar4 != '\0') {
        iVar5 = FUN_18060f9f0(local_50,0,10);
        if ((param_3 <= iVar5) && (param_3 = iVar5, param_4 < iVar5)) {
          param_3 = param_4;
        }
        *param_2 = param_3;
      }
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
  }
}



