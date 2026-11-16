// FUN_1801ce330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ce330 */

void FUN_1801ce330(undefined8 param_1,float *param_2,int param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  fVar14 = param_2[3] * 0.5 + param_2[1];
  fVar15 = param_2[2] * 0.5 + *param_2;
  switch(param_3 + -1) {
  case 0:
    auVar13 = ZEXT464((uint)(fVar14 + 2.0));
    uVar4 = 0x3fb33333;
    fVar5 = 6.0;
    fVar8 = fVar15 + 0.0;
    auVar6 = ZEXT464((uint)fVar8);
    FUN_180433450(param_1,fVar8,fVar14 - 6.0,fVar8,fVar14 + 2.0,param_4,0x3fb33333);
    fVar8 = fVar14 - 1.0;
    FUN_180433450(param_1,fVar15 - 3.0,fVar8,auVar6._0_8_,auVar13._0_4_,param_4,uVar4);
    FUN_180433450(param_1,auVar6._0_8_,auVar13._0_8_,fVar15 + 3.0,fVar8,param_4,uVar4);
    fVar8 = fVar15 - fVar5;
    auVar7 = ZEXT464((uint)fVar8);
    auVar11 = ZEXT464((uint)(fVar14 + fVar5));
    FUN_180433450(param_1,fVar8,auVar13._0_8_,fVar8,fVar14 + fVar5,param_4,uVar4);
    auVar6 = ZEXT464((uint)(fVar15 + fVar5));
    FUN_180433450(param_1,auVar7._0_8_,auVar11._0_8_,fVar15 + fVar5,auVar11._0_4_,param_4,uVar4);
    fVar8 = auVar13._0_4_;
    uVar1 = auVar6._0_8_;
    uVar2 = auVar11._0_8_;
    uVar3 = uVar1;
    break;
  case 1:
    auVar6 = ZEXT464(0x40c00000);
    fVar8 = 1.0;
    auVar13 = ZEXT464((uint)(fVar14 - 6.0));
    local_a8 = 0x4000000040000000;
    uStack_a0 = 0x4000000040000000;
    FUN_1804330f0(param_1,fVar15 - 6.0,fVar14 - 6.0,0x41400000,0x41400000,param_4,&local_a8,
                  0x3f800000);
    auVar11 = ZEXT464((uint)(fVar15 - 3.0));
    FUN_180433010(param_1,fVar15 - 3.0,fVar14 + fVar8,auVar6._0_8_,0x40a00000,param_4,fVar8);
    auVar7 = ZEXT464((uint)(fVar14 - 2.0));
    uVar4 = 0x3fb33333;
    FUN_180433450(param_1,auVar11._0_8_,auVar13._0_8_,auVar11._0_8_,fVar14 - 2.0,param_4,0x3fb33333)
    ;
    auVar6 = ZEXT464((uint)(fVar15 + 3.0));
    FUN_180433450(param_1,auVar11._0_8_,auVar7._0_8_,fVar15 + 3.0,auVar7._0_4_,param_4,uVar4);
    uVar2 = auVar7._0_8_;
    fVar8 = auVar13._0_4_;
    uVar1 = auVar6._0_8_;
    uVar3 = uVar1;
    goto LAB_1801cebd5;
  case 2:
    uVar4 = 0x3fb33333;
    FUN_180433240(param_1,fVar15,fVar14,0x40a00000,param_4,0x3fb33333,0x10);
    fVar8 = fVar15 + 5.0;
    auVar6 = ZEXT464((uint)fVar8);
    auVar7 = ZEXT464((uint)(fVar14 - 1.0));
    FUN_180433450(param_1,fVar8,fVar14 - 6.0,fVar8,fVar14 - 1.0,param_4,uVar4);
    fVar8 = auVar7._0_4_;
    uVar2 = auVar7._0_8_;
    uVar1 = auVar6._0_8_;
    uVar3 = (ulonglong)(uint)(fVar15 + 1.0);
    break;
  case 3:
    fVar5 = 5.0;
    uVar4 = 0x3fb33333;
    fVar9 = 0.0;
    FUN_180433450(param_1,fVar15 - 5.0,param_3 + -1,fVar15 + 5.0,fVar14 + 0.0,param_4,0x3fb33333);
    uVar1 = (ulonglong)(uint)(fVar15 + fVar9);
    fVar8 = fVar14 + fVar5;
    uVar2 = (ulonglong)(uint)(fVar14 - fVar5);
    uVar3 = (ulonglong)(uint)(fVar15 + fVar9);
    break;
  case 4:
    auVar11 = ZEXT464((uint)(fVar15 + 3.0));
    auVar10 = ZEXT464((uint)(fVar14 + 4.0));
    auVar12 = ZEXT464((uint)(fVar15 - 5.0));
    auVar13 = ZEXT464((uint)(fVar14 - 4.0));
    uVar4 = 0x3fb33333;
    FUN_180433450(param_1,fVar15 - 5.0,fVar14 + 4.0,fVar15 + 3.0,fVar14 - 4.0,param_4,0x3fb33333);
    auVar6 = ZEXT464((uint)(fVar15 + 6.0));
    auVar7 = ZEXT464((uint)(fVar14 - 1.0));
    FUN_180433450(param_1,auVar11._0_8_,auVar13._0_8_,fVar15 + 6.0,fVar14 - 1.0,param_4,uVar4);
    auVar11 = ZEXT464((uint)(fVar15 - 2.0));
    auVar13 = ZEXT464((uint)(fVar14 + 7.0));
    FUN_180433450(param_1,auVar6._0_8_,auVar7._0_8_,fVar15 - 2.0,fVar14 + 7.0,param_4,uVar4);
    FUN_180433450(param_1,auVar12._0_8_,auVar10._0_8_,auVar12._0_8_,auVar13._0_4_,param_4,uVar4);
    uVar2 = auVar13._0_8_;
    fVar8 = auVar13._0_4_;
    uVar1 = auVar12._0_8_;
    uVar3 = auVar11._0_8_;
    goto LAB_1801cebd5;
  case 5:
    fVar5 = 6.0;
    fVar9 = 4.0;
    uVar4 = 0x3fb33333;
    fVar8 = fVar14 - 4.0;
    auVar13 = ZEXT464((uint)fVar8);
    FUN_180433450(param_1,fVar15 - 6.0,fVar8,fVar15 + 6.0,fVar8,param_4,0x3fb33333);
    FUN_180433450(param_1,fVar15 - 2.0,fVar14 - fVar5,fVar15 + 2.0,fVar14 - fVar5,param_4,uVar4);
    fVar8 = 3.0;
    auVar7 = ZEXT464((uint)(fVar15 - 3.0));
    auVar11 = ZEXT464((uint)(fVar14 + fVar5));
    FUN_180433450(param_1,fVar15 - fVar9,auVar13._0_8_,fVar15 - 3.0,fVar14 + fVar5,param_4,uVar4);
    auVar6 = ZEXT464((uint)(fVar15 + fVar8));
    FUN_180433450(param_1,auVar7._0_8_,auVar11._0_8_,fVar15 + fVar8,auVar11._0_4_,param_4,uVar4);
    FUN_180433450(param_1,auVar6._0_8_,auVar11._0_8_,fVar15 + fVar9,auVar13._0_4_,param_4,uVar4);
    fVar5 = 1.0;
    auVar6 = ZEXT464((uint)(fVar14 - 1.0));
    fVar8 = fVar14 + fVar8;
    FUN_180433450(param_1,fVar15 - 1.0,fVar14 - 1.0,fVar15 - 1.0,fVar8,param_4,uVar4);
    uVar1 = (ulonglong)(uint)(fVar15 + fVar5);
    uVar2 = auVar6._0_8_;
    uVar3 = (ulonglong)(uint)(fVar15 + fVar5);
    break;
  case 6:
    uVar4 = 0x3fb33333;
    auVar11 = ZEXT464((uint)(fVar15 + 4.0));
    auVar7 = ZEXT464((uint)(fVar14 - 4.0));
    auVar6 = ZEXT464((uint)(fVar15 - 4.0));
    fVar8 = fVar14 + 4.0;
    FUN_180433450(param_1,fVar15 - 4.0,fVar14 - 4.0,fVar15 + 4.0,fVar8,param_4,0x3fb33333);
    uVar2 = auVar7._0_8_;
    uVar1 = auVar11._0_8_;
    uVar3 = auVar6._0_8_;
LAB_1801cebd5:
    break;
  case 7:
    local_a8 = 0x4000000040000000;
    uStack_a0 = 0x4000000040000000;
    FUN_1804330f0(param_1,fVar15 - 5.0,fVar14 - 3.0,0x41100000,0x41200000,param_4,&local_a8,
                  0x3f800000);
    fVar8 = fVar14 - 6.0;
    auVar7 = ZEXT464((uint)fVar8);
    auVar6 = ZEXT464((uint)(fVar15 + 7.0));
    uVar4 = 0x3fb33333;
    FUN_180433450(param_1,fVar15 - 2.0,fVar8,fVar15 + 7.0,fVar8,param_4,0x3fb33333);
    fVar8 = fVar14 + 3.0;
    uVar1 = auVar6._0_8_;
    uVar2 = auVar7._0_8_;
    uVar3 = uVar1;
    break;
  case 8:
    auVar6 = ZEXT464((uint)(fVar14 - 5.0));
    fVar8 = 4.0;
    uVar4 = 0x3fb33333;
    auVar7 = ZEXT464(0x40000000);
    auVar13 = ZEXT464((uint)(fVar15 - 4.0));
    FUN_180433240(param_1,fVar15 - 4.0,fVar14 - 5.0,auVar7._0_8_,param_4,0x3fb33333,0xc);
    auVar11 = ZEXT464((uint)(fVar15 + fVar8));
    FUN_180433240(param_1,fVar15 + fVar8,auVar6._0_8_,auVar7._0_8_,param_4,uVar4,0xc);
    FUN_180433240(param_1,auVar13._0_8_,fVar14 + 6.0,auVar7._0_8_,param_4,uVar4,0xc);
    auVar7 = ZEXT464((uint)(fVar14 - 3.0));
    FUN_180433450(param_1,auVar13._0_8_,fVar14 - 3.0,auVar13._0_8_,fVar14 + fVar8,param_4,uVar4);
    auVar6 = ZEXT464((uint)(fVar14 + 0.0));
    FUN_180433450(param_1,auVar11._0_8_,auVar7._0_8_,auVar11._0_8_,fVar14 + 0.0,param_4,uVar4);
    fVar8 = fVar14 + 3.0;
    uVar2 = auVar6._0_8_;
    uVar1 = auVar11._0_8_;
    uVar3 = auVar13._0_8_;
    break;
  case 9:
    uVar4 = 0x3fb33333;
    FUN_180433240(param_1,fVar15 - 1.0,fVar14 - 1.0,0x40900000,param_4,0x3fb33333,0x10);
    fVar8 = fVar14 + 6.0;
    uVar2 = (ulonglong)(uint)(fVar14 + 2.0);
    uVar1 = (ulonglong)(uint)(fVar15 + 2.0);
    uVar3 = (ulonglong)(uint)(fVar15 + 6.0);
    break;
  default:
    goto switchD_1801ce3b0_default;
  }
  FUN_180433450(param_1,uVar1,uVar2,uVar3,fVar8,param_4,uVar4);
switchD_1801ce3b0_default:
  return;
}



