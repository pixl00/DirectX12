struct ModelViewProjection
{
    matrix MVP;
};
 
ConstantBuffer<ModelViewProjection> ModelViewProjectionCB : register(b0);

struct Input
{
    float3 Position : POSITION;
    float3 Color : COLOR;
};

struct Output
{
    float4 Color : COLOR;
    float4 Position : SV_Position;
};

Output main(Input IN)
{
    Output OUT;

    //Clip-space position
    OUT.Position = mul(ModelViewProjectionCB.MVP, float4(IN.Position, 1.0f));
    OUT.Color = float4(IN.Color, 1.0f);
 
    return OUT;
}