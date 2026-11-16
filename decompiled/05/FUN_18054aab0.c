// FUN_18054aab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054aab0 */

void FUN_18054aab0(undefined8 *param_1,undefined4 param_2,char *param_3,char *param_4,uint param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float local_res8;
  undefined4 local_resc;
  ulonglong in_stack_ffffffffffffff98;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar2 = *(longlong *)*param_1;
  local_res8 = *(float *)param_1[3];
  fVar4 = 0.0;
  fVar1 = *(float *)param_1[2];
  lVar3 = *(longlong *)param_1[1];
  local_resc = param_2;
  if ((((DAT_180c62f64 & 0xff000000) != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x20);
    }
    if (fVar1 == 0.0) {
      fVar1 = *(float *)(*(longlong *)(lVar2 + 0x38) + 0x28);
    }
    local_48 = *(undefined8 *)(lVar2 + 0x60);
    uStack_40 = *(undefined8 *)(lVar2 + 0x68);
    FUN_1804ea5f0(lVar3,lVar2,fVar1,&local_res8,DAT_180c62f64,&local_48,param_3,0,
                  in_stack_ffffffffffffff98 & 0xffffffff00000000,0);
  }
  uVar6 = 0;
  uVar5 = 0;
  FUN_1804ea040(&local_res8,*(undefined8 *)param_1[1],*(undefined4 *)param_1[2],0x7f7fffff,fVar4,
                param_3,0,0,0);
  lVar2 = *(longlong *)*param_1;
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(char **)param_4;
  }
  local_res8 = local_res8 + *(float *)param_1[3] + *(float *)param_1[6] * 5.0;
  fVar1 = *(float *)param_1[5];
  lVar3 = *(longlong *)param_1[4];
  if ((((param_5 & 0xff000000) != 0) && (param_4 != (char *)0x0)) && (*param_4 != '\0')) {
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x20);
    }
    if (fVar1 == fVar4) {
      fVar1 = *(float *)(*(longlong *)(lVar2 + 0x38) + 0x28);
    }
    local_48 = *(undefined8 *)(lVar2 + 0x60);
    uStack_40 = *(undefined8 *)(lVar2 + 0x68);
    local_resc = param_2;
    FUN_1804ea5f0(lVar3,lVar2,fVar1,&local_res8,param_5,&local_48,param_4,0,CONCAT44(uVar5,fVar4),0,
                  uVar6);
  }
  return;
}



